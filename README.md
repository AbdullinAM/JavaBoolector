JavaBoolector
===============================================================================
Java bindings for [Boolector](https://github.com/boolector/boolector) SMT solver

Dependencies
-------------------------------------------------------------------------------
[Boolector](https://github.com/boolector/boolector) version 3.1.0 should be 
installed in the system

Build
-------------------------------------------------------------------------------

Build and install native libraries:
```
make
make install
```

Build java bindings library:
```
mvn clean package
```

Build jar with sources:
```
mvn sources:jar
```

Build tar.gz with sources:
```
mvn clean assembly:assembly
```

