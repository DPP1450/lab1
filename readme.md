## 解法 
``` cpp
    Window *w = new simple_window();
    w = new verticalScrollBarWindow(w);
    w = new closeButtonWindow(w);
    cout << w->getDescription() << endl;
```
使用decorator幫原本的window新增功能

## UML
![](https://i.imgur.com/b1FzzY0.png)