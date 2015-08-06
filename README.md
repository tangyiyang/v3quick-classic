Why this Project?
=================
Quick-cocos2d-x is really a nice project, but the core developer dualface(github.com/dualface) is not going to maintain the quick-cocos2d-x branch any more. What's more, due to the official team upgrade the engine too often, and it's seems cocos2d-x team like javascript much better than Lua, so maitain your own version of cocos2d-x is really the only and good choice for commercial projects.


Goal
==================
Keep up with the official 'Good Parts' and the 'Good Parts' of the original Quick-cocos2d-x.
Provides a simple version.


Features in this Branch
===========================

        1. Add FileDataCache to improve creation of spine.
        2. Add SpriteBuilder runtime for quick. (https://github.com/tangyiyang/spritebuilder-lua)
        3. Upgrade Luajit to v2.1, support arm64 bytecode on ios.
        4. Add lpeg and sproto support for Lua. Can easily connect to skynet server.
