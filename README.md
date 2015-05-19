跟着官方升级真心太累了，自己维护一个私有版本。
目标：  继续保持quick原来的思路，将好用的，经久不衰的功能merge到这个分支。提供一个干净，简单的版本。


现在已经加入的feature: 

        1. 增加pomelo的bind, C层和Lua层。
        2. 增加FileData的cache.加速spine的创建。
        3. 增加SpriteBuilder for quick 的 runtime, 已完成基本的UI组件和UI动画功能。
        地址：https://github.com/tangyiyang/spritebuilder-lua

将要增加的feature:

        引擎:
            .增加valgrind做内存检测。
            .继承Lua unit test模块。
            .Hack new/placement new/malloc/alloc。随时可以dump出所有的内存。(要考虑找一个内存分配器?)
            .增加'Continus' for CCControlButton。
            .在Lua层做所有UI相关的工作，逐渐替换cocos studio和cocos studio UI runtime的相关代码。
            .优化tilemap的接口。增加一些基本的寻路模块。
            .彻底移除deprecated目录。
            .优化spine的Lua接口。
            .在Lua层，实现一个干净的Tilemap解析，而不是在C++层去做。


        音效：
            集成fmod，增加Lua接口。同时还是保留原来的simpleAudio engine.
        Lua:
            集成luajit-v2.1，统一android和ios。
        示例：
            优化makefile，做一个更好的项目模板。
        Android:
            优化CCEditBox, 做一个和iOS一样的输入法。
