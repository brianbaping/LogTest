# C++ Singleton Logger with spdlog

This project demonstrates how to set up and use `spdlog` as a singleton logger in a C++ application. The singleton pattern ensures that only one instance of the logger is used throughout the application.

## Features

- Global access to a single logger instance
- Console and file logging
- Configurable log levels and patterns
- Thread-safe logging

## Getting Started

### Prerequisites

- C++ compiler (C++11 or later)
- CMake (version 3.10 or later)
- [spdlog](https://github.com/gabime/spdlog) library

### Installation

#### Using CMake

1. Clone the repository:

   ```sh
   git clone https://github.com/yourusername/LogTest.git
   cd LogTest
