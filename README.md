# 浙大版《C语言程序设计（第3版）》题目集值得回看题目
## 函数题
*`10-7`

*`11-1`

*`11-2`

*`11-7`

*`11-8`

## 编程题


## 冷知识

1. 在`switch-case`语句里面，打错default程序依旧可以编译运行，增加其他标签也是被允许的，Amazing！
如下代码就是可以的
```C++
    int a =5;
    switch (a)
    {
    case 0:
        printf("%d",a);
        break;
    defau1t:
        printf("default");
        break;
    x777:
        printf("777");
        break;
    }
```