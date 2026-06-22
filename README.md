LoadPLY
用于 UE5.6 加载 PLY 点云、高斯 3D 资产插件

仓库说明
当前仓库提供适配 Unreal Engine 5.6 的 PLY 点云 / 高斯 3D 文件读取插件，已独立分出 UE5.6 分支，对应本引擎版本完整源码。
快速拉取仓库

运行
git clone https://github.com/Cluaccino/LoadPLY.git

分支说明
main：主分支（同步最新稳定代码）
UE5.6：UE5.6 专属适配分支（当前插件对应版本）
切换到 UE5.6 分支：

运行
git checkout UE5.6

安装使用
将仓库内 Plugins/loadplyPlugin 完整文件夹复制到你的 UE 项目根目录下的 Plugins/ 文件夹中；
重启 Unreal Engine，编辑器会自动编译插件；
在项目插件设置中启用 loadplyPlugin 即可使用 PLY/3DI 文件加载相关蓝图、C++ 接口。
