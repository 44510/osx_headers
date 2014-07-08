//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MGDetentFunction : NSObject
{
    double *_sortedDetents;
    unsigned long long _detentCount;
    double _detentMagnitude;
}

- (double)outputValueAtInputValue:(double)arg1 isInDetent:(char *)arg2 indexOfDetent:(unsigned long long *)arg3;
- (double)outputValueAtInputValue:(double)arg1;
- (double)inputValueAtOutputValue:(double)arg1;
- (double)detentMagnitude;
- (id)detents;
- (void)dealloc;
- (id)init;
- (id)initWithDetents:(id)arg1 detentMagnitude:(double)arg2;

@end

