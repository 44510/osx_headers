//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPredicateEditorRowTemplate.h"

@class NSLevelIndicator, NSPopUpButton, NSString;

@interface _AMRatingRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_leftExpressionPopup;
    NSPopUpButton *_operatorTypePopup;
    NSLevelIndicator *_ratingIndicator;
    NSString *_name;
    NSString *_keyPath;
    BOOL _hasCreatedViews;
}

+ (id)templateWithName:(id)arg1 withKeyPath:(id)arg2;
- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (void)createViewsIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 withKeyPath:(id)arg2;

@end

