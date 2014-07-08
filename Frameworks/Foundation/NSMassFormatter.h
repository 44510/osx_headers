//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface NSMassFormatter : NSFormatter
{
    void *_formatter;
    BOOL _isForPersonMassUse;
}

@property(getter=isForPersonMassUse) BOOL forPersonMassUse; // @synthesize forPersonMassUse=_isForPersonMassUse;
- (id)stringFromValue:(double)arg1 unit:(long long)arg2;
- (id)stringFromKilograms:(double)arg1;
- (id)unitStringFromValue:(double)arg1 unit:(long long)arg2;
- (id)unitStringFromKilograms:(double)arg1 usedUnit:(long long *)arg2;
@property long long unitStyle;
@property(copy) NSNumberFormatter *numberFormatter;
- (void)dealloc;
- (id)init;
- (long long)targetUnitFromKilograms:(double)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;

@end

