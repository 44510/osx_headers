//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPCExpression;

@interface SPCParagraphStyle : NSObject
{
    SPCExpression *_alignment;
    SPCExpression *_lineBreakMode;
    SPCExpression *_lineSpacing;
}

+ (id)paragraphStyleWithAlignment:(unsigned long long)arg1 lineBreakMode:(unsigned long long)arg2;
+ (id)defaultParagraphStyle;
@property(retain, nonatomic) SPCExpression *lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) SPCExpression *lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(retain, nonatomic) SPCExpression *alignment; // @synthesize alignment=_alignment;
- (id)NSParagraphStyleInEnvironment:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithAlignment:(unsigned long long)arg1 lineBreakMode:(unsigned long long)arg2;

@end

