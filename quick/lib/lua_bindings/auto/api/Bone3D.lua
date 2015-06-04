
--------------------------------
-- @module Bone3D
-- @extend Ref
-- @parent_module cc

--------------------------------
-- Returns the inverse bind pose matrix for this joint.<br>
-- return Inverse bind pose matrix.
-- @function [parent=#Bone3D] getInverseBindPose 
-- @param self
-- @return mat4_table#mat4_table ret (return value: mat4_table)
        
--------------------------------
-- clear bone blend states
-- @function [parent=#Bone3D] clearBoneBlendState 
-- @param self
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- reset pose to origin
-- @function [parent=#Bone3D] resetPose 
-- @param self
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- set animation value<br>
-- param trans translate vec3<br>
-- param rot   rotation quaternion<br>
-- param scale scale vec3<br>
-- param tag, unique tag, only blend animation between different tags<br>
-- param weight, blend weight
-- @function [parent=#Bone3D] setAnimationValue 
-- @param self
-- @param #float trans
-- @param #float rot
-- @param #float scale
-- @param #void tag
-- @param #float weight
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- get child bone by index
-- @function [parent=#Bone3D] getChildBoneByIndex 
-- @param self
-- @param #int index
-- @return Bone3D#Bone3D ret (return value: cc.Bone3D)
        
--------------------------------
-- remove child bone
-- @function [parent=#Bone3D] removeChildBone 
-- @param self
-- @param #cc.Bone3D bone
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- bone tree, we do not inherit from Node, Node has too many properties that we do not need. A clean Node is needed.
-- @function [parent=#Bone3D] getParentBone 
-- @param self
-- @return Bone3D#Bone3D ret (return value: cc.Bone3D)
        
--------------------------------
-- get bone name
-- @function [parent=#Bone3D] getName 
-- @param self
-- @return string#string ret (return value: string)
        
--------------------------------
-- remove all child bone
-- @function [parent=#Bone3D] removeAllChildBone 
-- @param self
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- add child bone
-- @function [parent=#Bone3D] addChildBone 
-- @param self
-- @param #cc.Bone3D bone
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- get child bone count
-- @function [parent=#Bone3D] getChildBoneCount 
-- @param self
-- @return long#long ret (return value: long)
        
--------------------------------
-- Updates the joint matrix.<br>
-- param matrixPalette The matrix palette to update.
-- @function [parent=#Bone3D] updateJointMatrix 
-- @param self
-- @param #vec4_table matrixPalette
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- Sets the inverse bind pose matrix.<br>
-- param m Mat4 representing the inverse bind pose for this Bone.
-- @function [parent=#Bone3D] setInverseBindPose 
-- @param self
-- @param #mat4_table m
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- get wrod matrix
-- @function [parent=#Bone3D] getWorldMat 
-- @param self
-- @return mat4_table#mat4_table ret (return value: mat4_table)
        
--------------------------------
-- update own world matrix and children's
-- @function [parent=#Bone3D] updateWorldMat 
-- @param self
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- Sets the bone's original pose.<br>
-- param m Mat4 representing the original pose for this Bone.
-- @function [parent=#Bone3D] setOriPose 
-- @param self
-- @param #mat4_table m
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- remove child bone by index
-- @function [parent=#Bone3D] removeChildBoneByIndex 
-- @param self
-- @param #int index
-- @return Bone3D#Bone3D self (return value: cc.Bone3D)
        
--------------------------------
-- Creates C3DBone.
-- @function [parent=#Bone3D] create 
-- @param self
-- @param #string id
-- @return Bone3D#Bone3D ret (return value: cc.Bone3D)
        
return nil
