# IPTool

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)

A lightweight command-line utility that displays your system's IP addresses in a clean, readable format.

## 🚀 Features

- **Simple**: Clean, focused output showing only IP addresses
- **Multi-Protocol**: Supports both IPv4 and IPv6 addresses
- **Cross-Platform**: Works on macOS, Linux, and other Unix-like systems
- **Zero Dependencies**: Pure C implementation with no external dependencies

## 📦 Installation

### From Source

1. Clone the repository:
   ```bash
   git clone https://github.com/bosoud/iptool.git
   ```

2. Navigate to the project directory:
   ```bash
   cd iptool
   ```

3. Build and install:
   ```bash
   make
   sudo make install
   ```

## 🔨 Usage

Display your IP addresses:
```bash
iptool
```

Example output:
```
IPv4: 192.168.1.100
IPv6: fe80::1234:5678:9abc:def0
```

## 🤝 Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## ⚠️ Note

This tool requires appropriate permissions to access network interface information.

## 📫 Contact

- Create an Issue: [GitHub Issues](https://github.com/bosoud/iptool/issues)
- Send a Pull Request: [GitHub Pull Requests](https://github.com/bosoud/iptool/pulls)

---

Made with ❤️ by [Bosoud](https://github.com/bosoud)
