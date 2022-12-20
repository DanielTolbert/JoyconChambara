# Joycon Chambara Project 

## Creators:
 - Timothy Wu
 - Nicholas Miller 
 - Daniel Tolbert
 - John Zoscak

## Build & Run:

### Windows: 

* Note: Ensure environment variable `OpenCV_ROOT` is set to the path to your OpenCV installation to ensure the build completes. Ex: `C:\path\to\installation\opencv\build\x64\vc15\lib`
```
$ cmake -G "Unix Makefiles" .
$ make
$ ./JoyconChambara.exe
```

### Linux: 

```
$ cmake .
$ make
$ ./JoyconChambara
```
