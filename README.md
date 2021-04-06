# unittest

# git
* git config user.name
* git config user.email
* git config --global user.name "zhhigh" 
* git config --global user.email "zhhigh@163.com"
* git config --global user.password "hdbmaster@139"
* git config --show-origin --get credential.helper

## The requested URL returned error: 403
* 打开cmd，输入命令：rundll32.exe keymgr.dll,KRShowKeyMgr，出现存储的用户名和密码窗口
* 将github相关的条目删除
* 重新执行命令：$ git push -u origin master，提示输入账户名及密码后，成功。

# wechat
* 	class-dump -H /Applications/WeChat.app
* class-dump -S -s -H /Applications/WeChat.app -o /Users/zhanghua/wechat
* /Users/zhanghua/Applications/classdump35