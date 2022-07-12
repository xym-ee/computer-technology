---
sort: 1
---
# 浏览器生成http请求消息

## 输入的网址

一个网址： **http://www.baidu.com**

这个东西叫 URL(Uniform Resource Locator)，统一资源定位符。

除了"http:"开头，也可以使用"ftp:"，"file:"，"mailto:"开头。

我们通常使用浏览器来冲浪（访问web服务器），但是浏览器不止有这个功能，也可以用来在ftp(File Transfer Protocol)服务器上传下载文件，


一些常见的url

https://xu.yumeng.tech/images/wechat.png

访问一个png格式的图片

https://xu.yumeng.tech/categories.html

访问一个html格式的文件

file://localhost/e:/path/file.zip

访问一个文件


```note
但是一般我们访问网站，输入的是一个很简单的域名如

http://www.baidu.com

有意思的是，如果输入这个地址，出现的也是上面这个页面

http://www.baidu.com/index.html

后面也会说到这个问题
```

url的开头的文字表示浏览器应该使用的访问方法，如访问web服务器时用http协议，访问ftp服务器用ftp协议。因此这部分可以理解为协议类型。


## 浏览器解析url


|协议||服务器名|目录|文件名|
|:-:|-|:-:|:-:|:-:|
|http:|//|xu.yumeng.tech|/categories|/fieldplay.html|

这个url会拆分成这几部分，因此浏览器的解析结果就是访问xu.yumeng.tech这个web服务器上在/categories目录下的fieldplay.html这个文件。

也即我们看到的网页本质上是个文件。文本+格式控制+小插件就形成各类各种各样的网页。

## url省略的情况

上百度，一般输入www.baidu.com就可以了，但是这个网页本质上是个文件。

下面这三个最终效果都是访问百度的主页，http://www.baidu.com/index.html 这种写法是最能表达含义，因此可以判断，另外两种写法是有省略的。

|协议||服务器名|文件名|
|:-:|-|:-:|:-|
|http:|//|www.baidu.com|
|http:|//|www.baidu.com|/
|http:|//|www.baidu.com|/index.html

服务器会预先设置好省略时访问的默认文件名，大多数情况下时index.html或者default.html

http://www.baidu.com/ 只访问了服务器的根目录，因此实际访问的是根目录的index.html文件。

http://www.baidu.com 是最多用的冲浪方式，连/都省略了，没有路径名，就代表访问根目录下的默认文件，也即/index.html


还有一种情况

http://xu.yumeng.tech/categories

不可以既有一个categories目录，还有个categories文件。这个网址末尾没有/，看起来是个文件，但是呢，也可以是一个目录，默认访问categories里的index.html文件。

```tip
最早的时候 index.html 这个文件叫做主页(home page)，意思是省略文件名访问的默认页面，后来这个词义扩大化了。


```

## http的基本思路

解析完url后，就知道访问的目标文件在哪里了，接下来浏览器会用http协议访问web服务器。

想来看看http协议又是咋回事。



