//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISDDataManager, NSString;

@interface ISDDataObject : NSObject
{
    ISDDataManager *_dataManager;
    unsigned int _anchor;
    NSString *_comment;
    ISDDataObject *_topParent;
}

- (void)setComment:(id)arg1;
- (id)comment;
- (void)setValueFromObject:(id)arg1 forKey:(id)arg2 didChange:(char *)arg3;
- (BOOL)morphInToObject:(id)arg1;
- (void)setTopParent:(id)arg1;
- (id)topParent;
- (id)anchorChildren;
- (void)setAnchor:(unsigned int)arg1;
- (unsigned int)anchor;
- (id)dataManager;
- (id)fastDataManager;
- (void)setDataManager:(id)arg1;
- (void)dealloc;

@end

