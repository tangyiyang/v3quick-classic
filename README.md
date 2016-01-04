Why this Project?
=================
[Quick-cocos2d-x](https://github.com/dualface/v3quick) is really a nice project, but the core developer dualface(github.com/dualface) is not going to maintain the quick-cocos2d-x branch any more. What's more, due to the official team upgrade the engine too often, and it's seems cocos2d-x team like javascript much better than Lua, so maitain your own version of cocos2d-x is really the only and good choice for commercial projects.

What does Quick-cocos2d-x provide?
================
        
        1. Provide a better and simpler simulator on Mac & Windows(Not avaliable in this branch right now, cause I don't have an windows :(, but it only need upgrade the project file to make things works.) for development, iOS simulator is no longer needed to debug your project in most cases, just click CMD+R to restart.
        2. Provide a set of simpler API(quick/framework/*.Lua) to write your game in a more Lua way.
        
Goal
==================
Keep up with the official 'Good Parts' and the 'Good Parts' of the original Quick-cocos2d-x.
Keeping removing more unused feature and make this branch a more simpler and maitainable version.


More Features in this Branch
===========================

        1. Add SpriteBuilder runtime for Lua. (https://github.com/tangyiyang/spritebuilder-lua)
        2. Upgrade Luajit to v2.1, support arm64 bytecode on ios.
        3. Add lpeg and sproto support for Lua. (https://github.com/cloudwu/sproto)
