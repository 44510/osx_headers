//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSArray, _MKResultView;

__attribute__((visibility("hidden")))
@interface SafariMKResultView : NSTableCellView
{
    _MKResultView *_resultView;
    NSArray *_layoutConstraints;
}

- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (id)initWithMKResultView:(id)arg1;

@end

