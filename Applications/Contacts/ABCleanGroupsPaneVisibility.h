//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABCleanSplitViewConstraints;

@interface ABCleanGroupsPaneVisibility : NSObject
{
    ABCleanSplitViewConstraints *_constraints;
    _Bool _groupsPaneHidden;
}

- (void)showGroupsPaneWithAnimation:(_Bool)arg1 adjustWindowFrame:(_Bool)arg2;
- (void)hideGroupsPaneWithAnimation:(_Bool)arg1 adjustWindowFrame:(_Bool)arg2;
- (_Bool)setGroupsPaneHidden:(_Bool)arg1 withAnimation:(_Bool)arg2 adjustWindwoFrame:(_Bool)arg3;
@property(readonly, nonatomic, getter=isGroupsPaneHidden) _Bool groupsPaneHidden;
- (void)dealloc;
- (id)initWithSplitViewConstraints:(id)arg1;

@end

