
--------------------------------
-- @module Sprite3DMaterialCache
-- @parent_module cc

--------------------------------
-- remove all spritematerial
-- @function [parent=#Sprite3DMaterialCache] removeAllSprite3DMaterial 
-- @param self
-- @return Sprite3DMaterialCache#Sprite3DMaterialCache self (return value: cc.Sprite3DMaterialCache)
        
--------------------------------
-- add to cache
-- @function [parent=#Sprite3DMaterialCache] addSprite3DMaterial 
-- @param self
-- @param #string key
-- @param #cc.Texture2D tex
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- remove unused spritematerial
-- @function [parent=#Sprite3DMaterialCache] removeUnusedSprite3DMaterial 
-- @param self
-- @return Sprite3DMaterialCache#Sprite3DMaterialCache self (return value: cc.Sprite3DMaterialCache)
        
--------------------------------
-- get material from cache
-- @function [parent=#Sprite3DMaterialCache] getSprite3DMaterial 
-- @param self
-- @param #string key
-- @return Texture2D#Texture2D ret (return value: cc.Texture2D)
        
--------------------------------
-- 
-- @function [parent=#Sprite3DMaterialCache] destroyInstance 
-- @param self
-- @return Sprite3DMaterialCache#Sprite3DMaterialCache self (return value: cc.Sprite3DMaterialCache)
        
--------------------------------
-- get & destroy cache
-- @function [parent=#Sprite3DMaterialCache] getInstance 
-- @param self
-- @return Sprite3DMaterialCache#Sprite3DMaterialCache ret (return value: cc.Sprite3DMaterialCache)
        
return nil
