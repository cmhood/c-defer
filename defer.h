#pragma once

#define defer defer__2(__COUNTER__)
#define defer__2(X) defer__3(X)
#define defer__3(X) defer__4(defer__id##X)
#define defer__4(ID) auto void ID##func(char (*)[]); __attribute__((cleanup(ID##func))) char ID##var[0]; void ID##func(char (*ID##param)[])
