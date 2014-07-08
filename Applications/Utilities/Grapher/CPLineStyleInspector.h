//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPListFormatInspector.h"

@class CPFormatSampleView, CPTableView, NSMatrix;

@interface CPLineStyleInspector : CPListFormatInspector
{
    id mLineWidth;
    id mLineWidthText;
    NSMatrix *mLineCapStyle;
    NSMatrix *mLineJoinStyle;
    CPTableView *mPattern;
    CPFormatSampleView *mSample;
    BOOL mEditingPattern;
}

+ (id)sharedInspector;
+ (id)inspectorDidChangeNotification;
+ (Class)wellClass;
- (BOOL)format:(id)arg1 isEqualToFormatInList:(id)arg2;
- (void)addPatternElement:(id)arg1;
- (void)deleteSelectedRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)update:(id)arg1;
- (void)refresh;
- (void)refreshPattern;
- (id)lineStyle;
- (id)listFormats;
- (id)windowNibName;
- (id)title;
- (void)awakeFromNib;
- (id)imageForLineJoinStyle:(unsigned long long)arg1;
- (id)imageForLineCapStyle:(unsigned long long)arg1;
- (id)imageWithSize:(struct CGSize)arg1 bezierPath:(id)arg2;

@end

