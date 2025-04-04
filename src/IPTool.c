#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_header(const char* title) {
    printf("\n\033[1;36m╔══════════════════════════════════════════╗\033[0m\n");
    printf("\033[1;36m║\033[0m %-40s \033[1;36m║\033[0m\n", title);
    printf("\033[1;36m╚══════════════════════════════════════════╝\033[0m\n");
}

int main() {
    print_header("IP Addresses");

    // Get Gateway IP to compare against
    char gateway[256] = {0};
    FILE *gw = popen("route -n get default | grep 'gateway' | awk '{print $2}'", "r");
    if (gw != NULL) {
        fgets(gateway, sizeof(gateway), gw);
        gateway[strcspn(gateway, "\n")] = 0;
        pclose(gw);
    }

    // Display all other IPs first
    FILE *fp = popen("ifconfig | awk '/^[a-z]/ { iface=$1 } /inet / && $2 != \"127.0.0.1\" { print iface, $2 }'", "r");
    if (fp != NULL) {
        char ip[256];
        while (fgets(ip, sizeof(ip), fp) != NULL) {
            ip[strcspn(ip, "\n")] = 0;
            if (strcmp(ip, gateway) != 0) {
                printf("  • \033[1;36m%s\033[0m\n", ip);
            }
        }
        pclose(fp);
    }

    // Display Gateway IP last
    if (strlen(gateway) > 0) {
        printf("  • \033[1;32m%s\033[0m \033[1;33m(Gateway IP)\033[0m\n", gateway);
    }

    printf("\n");
    return 0;
}