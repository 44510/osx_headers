//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBCharacteristic, CBPeripheral, CBUUID, NSNumber;

@interface CBDescriptor : NSObject
{
    CBCharacteristic *_characteristic;
    CBUUID *_UUID;
    id _value;
    CBPeripheral *_peripheral;
    NSNumber *_handle;
}

@property(readonly, nonatomic) NSNumber *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain) id value; // @synthesize value=_value;
@property(readonly, nonatomic) CBUUID *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak CBCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (id)handleValueWritten:(id)arg1;
- (id)handleValueUpdated:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;

@end

