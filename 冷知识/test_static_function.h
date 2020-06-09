// # ifndef TEST_STATIC
// # define TEST_STATIC
// _declspec(dllexport) int add2(const int &x,const int &y);
// _declspec(dllexport) int mul2(int x,int y);
// _declspec(dllexport) int sub2(int x,int y);
// # endif
#ifdef TEST_STATIC
#define EXPORT __declspec(dllexport)
#else
#define EXPORT __declspec(dllimport)
#endif

// EXPORT static int add2(const int &x,const int &y);

EXPORT extern int mul2(int x,int y);

EXPORT int sub2(int x,int y);


