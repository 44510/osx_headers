//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class TListViewController;

@interface TListNameCellView : NSTableCellView
{
    TListViewController *_controller;
    _Bool _becomingFirstResponder;
    struct TNSRef<NSImageView *> _tagsView;
    _Bool _hasSpaceForTagImage;
    _Bool _isResizing;
}

@property _Bool hasSpaceForTagImage; // @synthesize hasSpaceForTagImage=_hasSpaceForTagImage;
@property(nonatomic) TListViewController *controller; // @synthesize controller=_controller;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateSpaceForTagImage:(_Bool)arg1;
- (void)updateTagsImageForNode:(const struct TFENode *)arg1 selected:(_Bool)arg2;
- (struct CGSize)idealSize;
- (void)layout;
- (struct CGRect)calcTagViewFrame;
- (struct CGRect)calcIconViewFrame;
- (void)viewDidEndLiveColumnResize;
- (void)viewWillStartLiveColumnResize;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)_viewDidEndLiveResize;
- (void)_viewWillStartLiveResize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

