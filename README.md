# 📦 UE-LoadPLY

**UE-LoadPLY** 是一个为 **Unreal Engine 5.6** 设计的轻量级插件，用于加载 **PLY（Polygon File Format）** 点云与高斯 3D 资产文件。

**UE-LoadPLY** is a lightweight plugin for **Unreal Engine 5.6** that enables loading **PLY (Polygon File Format)** point cloud and Gaussian 3D assets.

---

## ✨ 特性 | Features

- 🚀 **开箱即用** — 复制文件夹、重启引擎，即可开始使用
- 🧩 **原生 C++ 实现** — 高性能解析，无缝集成 UE 资产系统
- 🎯 **专为 UE 5.6 优化** — 适配最新引擎 API
- 📁 **支持点云 / 高斯 3D 数据** — 适用于 3D 扫描、场景重建等场景

- 🚀 **Plug & Play** — Copy the folder, restart the engine, and you're ready to go
- 🧩 **Native C++ Implementation** — High-performance parsing with seamless UE asset integration
- 🎯 **Optimized for UE 5.6** — Compatible with the latest engine APIs
- 📁 **Supports Point Cloud & Gaussian 3D Data** — Ideal for 3D scanning, scene reconstruction, and more

---

## 📥 安装 | Installation

### 1️⃣ 克隆仓库 | Clone the Repository

```bash
git clone https://github.com/Cluaccino/LoadPLY.git
```

### 2️⃣ 切换分支 | Switch to the Correct Branch

```bash
git checkout UE5.6
```

> 📌 **注意 | Note**  
> `main` 分支为稳定主线，`UE5.6` 分支为当前插件对应版本。  
> The `main` branch is the stable trunk, while `UE5.6` is the version corresponding to the current plugin.

### 3️⃣ 复制到项目 | Copy to Your Project

将 `Plugins/loadplyPlugin` 文件夹复制到你的 UE 项目根目录下的 `Plugins/` 文件夹中。

Copy the `Plugins/loadplyPlugin` folder to the `Plugins/` directory under your UE project root.

```
YourProject/
├── Plugins/
│   └── loadplyPlugin/   ← 复制到这里 | Copy here
├── Content/
└── ...
```

### 4️⃣ 重启引擎并启用插件 | Restart & Enable

重启 Unreal Engine，编辑器会自动编译插件。随后在 **项目设置 → 插件** 中启用 `loadplyPlugin`。

Restart Unreal Engine — the editor will automatically compile the plugin. Then enable `loadplyPlugin` in **Project Settings → Plugins**.

---

## 🎮 使用 | Usage

启用插件后，你可以通过以下方式使用 PLY 加载功能：

- **蓝图** — 使用插件提供的蓝图节点加载 PLY 资产

After enabling the plugin, you can load PLY assets via:

- **Blueprints** — Use the provided Blueprint nodes


> 💡 详细 API 文档请参考插件源码中的注释。  
> For detailed API documentation, refer to the comments in the plugin source code.


---

## 📚 相关链接 | Links

- [GitHub 仓库 | Repository](https://github.com/Cluaccino/UE-LoadPLY)
- [Unreal Engine 官方文档](https://docs.unrealengine.com/)

---

<p align="center">
  Made with ❤️ by <a href="https://github.com/Cluaccino">Cluaccino</a>
</p>
