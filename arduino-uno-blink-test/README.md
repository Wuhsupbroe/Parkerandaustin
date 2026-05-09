# Arduino Uno Blink Test Project

A simple PlatformIO-based project demonstrating basic Arduino Uno functionality with LED blinking.

## Prerequisites

- **Arduino IDE** or **PlatformIO** installed
- **Arduino Uno** development board
- **USB cable** for programming

## Getting Started

### Using PlatformIO

1. Open this project in VS Code with the PlatformIO extension
2. Press Ctrl+Shift+P and select PlatformIO: Build
3. Or select PlatformIO: Upload to flash the code to your Arduino Uno

### Using Arduino IDE

1. Open src/main.cpp in Arduino IDE
2. Connect your Arduino Uno via USB
3. Select Arduino Uno from Tools > Board
4. Click the upload button

## About This Project

This project serves as a basic test harness for Arduino Uno development. It demonstrates:

- Basic LED blinking on Pin 13 (built-in LED)
- PlatformIO project configuration
- Clean project structure with separate directories for:
  - **include/**: Header files and declarations
  - **lib/**: External libraries and dependencies
  - **src/**: Source code files
  - **test/**: Unit tests and verification code

## Configuration

Edit platformio.ini to customize:
- Board type (currently Arduino Uno)
- Upload speed
- Debug settings
- Build options

## Building

\\\ash
# Build the project
pio run

# Upload to Arduino Uno
pio run --target upload

# Clean build artifacts
pio run --target clean
\\\

## Testing

\\\ash
# Run tests
pio test

# Run specific test
pio test -t <test_name>
\\\

## Debugging

\\\ash
# Debug with PlatformIO
pio run -t debug

# View build output
pio device monitor
\\\

## License

MIT License - Feel free to use and modify as needed.

## Contributing

1. Fork the repository
2. Create a feature branch
3. Commit your changes
4. Push to the branch
5. Open a Pull Request

## Support

For issues or questions, please check the PlatformIO documentation:
- [PlatformIO Documentation](https://docs.platformio.org/)
- [Arduino Uno Reference](https://www.arduino.cc/reference/en/)
