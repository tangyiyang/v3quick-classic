
--------------------------------
-- @module SkeletonAnimation
-- @extend SkeletonRenderer
-- @parent_module sp

--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setStartListener 
-- @param self
-- @param #function listener
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setTrackEventListener 
-- @param self
-- @param #spTrackEntry entry
-- @param #function listener
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] getState 
-- @param self
-- @return spAnimationState#spAnimationState ret (return value: spAnimationState)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setTrackCompleteListener 
-- @param self
-- @param #spTrackEntry entry
-- @param #function listener
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] onTrackEntryEvent 
-- @param self
-- @param #int trackIndex
-- @param #int type
-- @param #spEvent event
-- @param #int loopCount
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setMixBone 
-- @param self
-- @param #string mixAnimationName
-- @param #array_table activeBoneNames
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setCompleteListener 
-- @param self
-- @param #function listener
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setTrackEndListener 
-- @param self
-- @param #spTrackEntry entry
-- @param #function listener
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setEventListener 
-- @param self
-- @param #function listener
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setAttachment 
-- @param self
-- @param #string slotName
-- @param #string attachmentName
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setMix 
-- @param self
-- @param #string fromAnimation
-- @param #string toAnimation
-- @param #float duration
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setEndListener 
-- @param self
-- @param #function listener
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] clearTracks 
-- @param self
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] setTrackStartListener 
-- @param self
-- @param #spTrackEntry entry
-- @param #function listener
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] clearTrack 
-- @param self
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
--------------------------------
-- 
-- @function [parent=#SkeletonAnimation] onAnimationStateEvent 
-- @param self
-- @param #int trackIndex
-- @param #int type
-- @param #spEvent event
-- @param #int loopCount
-- @return SkeletonAnimation#SkeletonAnimation self (return value: sp.SkeletonAnimation)
        
return nil
