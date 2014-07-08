//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSMutableDictionary, NSString, _NSProgressFraction;

__attribute__((visibility("hidden")))
@interface NSProgressValues : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_userInfo;
    _NSProgressFraction *_selfFraction;
    _NSProgressFraction *_childFraction;
    NSString *_localizedDescription;
    NSString *_localizedAdditionalDescription;
    BOOL _isCancellable;
    BOOL _isPausable;
    BOOL _isCancelled;
    BOOL _isPaused;
    NSString *_kind;
    BOOL _isPrioritizable;
}

+ (id)decodableClasses;
+ (BOOL)supportsSecureCoding;
+ (id)_derivedKeys;
- (id)overallFraction;
- (void)setTotalUnitCount:(long long)arg1;
- (long long)totalUnitCount;
- (void)setCompletedUnitCount:(long long)arg1;
- (long long)completedUnitCount;
- (void)setFractionCompleted:(double)arg1;
- (double)fractionCompleted;
- (void)setFinished:(BOOL)arg1;
- (BOOL)isFinished;
- (void)setIndeterminate:(BOOL)arg1;
- (BOOL)isIndeterminate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)_indentedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

