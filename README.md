# Coding Practices & Projects

A collection of coding practice exercises, projects, and learning notes.

## 📁 Structure

```
coding/
├── codewar_notes/          # Algorithm problems and solutions
│   ├── c/                  # C language solutions
│   └── cpp/                # C++ language solutions
├── examples/               # Third-party examples and benchmarks
├── libs/                   # External libraries (git submodules)
├── projects/               # Personal coding projects
│   └── epoll_send_file/   # High-performance file transfer server
└── README.md
```

## 🚀 Projects Status

### Completed
- [x] **epoll_send_file**: Socket-based file transfer using epoll
  - Location: `projects/epoll_send_file/`
  - Features: Non-blocking I/O, multiple concurrent connections
  - Build: `cd projects/epoll_send_file && make`

### Planned
- [ ] **async_http_server**: Asynchronous HTTP server
- [ ] **thread_pool**: Generic thread pool implementation
- [ ] **memory_allocator**: Custom memory allocator

## 📚 Learning Notes

### Algorithm Practice
- **C Solutions**: Basic algorithms and data structure problems
- **C++ Solutions**: STL usage, modern C++ features, optimization techniques

### Key Topics Covered
- Bit manipulation techniques
- String processing algorithms
- Array rotation algorithms
- Memory management patterns

## 🛠 Build & Development

### Prerequisites
```bash
# Ubuntu/Debian
sudo apt-get install build-essential git

# Initialize submodules
git submodule update --init --recursive
```

### Quick Start
```bash
# Build specific project
cd projects/epoll_send_file
make

# Run tests
make test
```

## 📖 Documentation

Each project contains its own README with:
- Build instructions
- Usage examples
- Architecture overview
- Known issues and TODOs

## 🤝 Contributing

When adding new projects:
1. Create project directory under `projects/`
2. Add Makefile with standard targets (`all`, `clean`, `test`)
3. Include README.md with documentation
4. Update main README status section