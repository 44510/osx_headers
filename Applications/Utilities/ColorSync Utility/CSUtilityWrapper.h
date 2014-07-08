//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView;

@interface CSUtilityWrapper : NSObject
{
    id _view;
    NSView *_initialFirstResponder;
    struct CGSize _viewMinSize;
    struct CGSize _viewMaxSize;
    id _module;
}

+ (id)newWithPath:(id)arg1;
- (id)module;
- (void)didSelect:(id)arg1;
- (void)willSelect:(id)arg1;
- (void)didUnselect:(id)arg1;
- (void)willUnselect:(id)arg1;
- (int)shouldUnselect:(id)arg1;
- (id)icon;
- (id)responderChainBegin;
- (id)initialFirstResponder;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (id)view;
- (id)description;
- (float)sortOrder;
- (unsigned int)signature;
- (id)identifier;
- (id)mainNibName;
- (id)bundle;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

