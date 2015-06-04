
--------------------------------
-- @module AABB
-- @parent_module cc

--------------------------------
-- reset min and max value.
-- @function [parent=#AABB] reset 
-- @param self
-- @return AABB#AABB self (return value: cc.AABB)
        
--------------------------------
-- Sets this bounding box to the specified values.
-- @function [parent=#AABB] set 
-- @param self
-- @param #vec3_table min
-- @param #vec3_table max
-- @return AABB#AABB self (return value: cc.AABB)
        
--------------------------------
-- Tests whether this bounding box intersects the specified bounding object.
-- @function [parent=#AABB] intersects 
-- @param self
-- @param #cc.AABB aabb
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- Transforms the bounding box by the given transformation matrix.
-- @function [parent=#AABB] transform 
-- @param self
-- @param #mat4_table mat
-- @return AABB#AABB self (return value: cc.AABB)
        
--------------------------------
-- Gets the center point of the bounding box.
-- @function [parent=#AABB] getCenter 
-- @param self
-- @return vec3_table#vec3_table ret (return value: vec3_table)
        
--------------------------------
-- Sets this bounding box to the smallest bounding box<br>
-- that contains both this bounding object and the specified bounding box.
-- @function [parent=#AABB] merge 
-- @param self
-- @param #cc.AABB box
-- @return AABB#AABB self (return value: cc.AABB)
        
--------------------------------
-- 
-- @function [parent=#AABB] isEmpty 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#AABB] getCorners 
-- @param self
-- @param #vec3_table dst
-- @return AABB#AABB self (return value: cc.AABB)
        
--------------------------------
-- update the _min and _max from the given point.
-- @function [parent=#AABB] updateMinMax 
-- @param self
-- @param #vec3_table point
-- @param #long num
-- @return AABB#AABB self (return value: cc.AABB)
        
--------------------------------
-- check whether the point is in.
-- @function [parent=#AABB] containPoint 
-- @param self
-- @param #vec3_table point
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- @overload self, vec3_table, vec3_table         
-- @overload self         
-- @function [parent=#AABB] AABB
-- @param self
-- @param #vec3_table min
-- @param #vec3_table max
-- @return AABB#AABB self (return value: cc.AABB)

return nil
