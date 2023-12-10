# GOF patterns
> This application shows GOF patterns implementation using modern C++
<hr>

[![Tokei](https://tokei.rs/b1/github/korenandr/gof_patterns)](https://github.com/Aaronepower/tokei)
[![Setup Guide](https://img.shields.io/badge/cmake%20guide-wiki-blue.svg?style=flat)](https://github.com/korenandr/gof_patterns/wiki)

# How to build:
```
git clone --recurse-submodules git@github.com:korenandr/gof_patterns.git
cd ./gof_patterns
docker build -t gof-patterns .
```

# How to use (example):
```
docker run -it --rm gof-patterns
gof_patterns -l /usr/local/var/log4cplus_properties.ini --help
gof_patterns -l /usr/local/var/log4cplus_properties.ini --pattern memento
```

### Useful links

* [GOF Design Patterns](https://refactoring.guru/design-patterns)
* [C++ Starter Template](https://github.com/cpp-best-practices/gui_starter_template)
* [Google Test](https://github.com/google/googletest/blob/main/docs/primer.md)
