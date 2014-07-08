//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface IOBluetoothSDPDataElement : NSObject <NSCoding>
{
    unsigned char mTypeDescriptor;
    unsigned char mSizeDescriptor;
    unsigned int mSize;
    NSObject *mValue;
    void *_mReserved;
}

+ (id)withSDPDataElementRef:(struct OpaqueIOBluetoothObjectRef *)arg1;
+ (id)withType:(unsigned char)arg1 sizeDescriptor:(unsigned char)arg2 size:(unsigned int)arg3 value:(id)arg4;
+ (id)withElementValue:(id)arg1;
+ (id)withBytes:(char *)arg1 maxLength:(unsigned int)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)containsValue:(id)arg1;
- (BOOL)containsDataElement:(id)arg1;
- (id)getValue;
- (id)getUUIDValue;
- (id)getArrayValue;
- (id)getStringValue;
- (id)getDataValue;
- (id)getNumberValue;
- (unsigned int)getSize;
- (unsigned char)getSizeDescriptor;
- (unsigned char)getTypeDescriptor;
- (struct OpaqueIOBluetoothObjectRef *)getSDPDataElementRef;
- (void)dealloc;
- (id)initWithElementValue:(id)arg1;
- (id)initWithType:(unsigned char)arg1 sizeDescriptor:(unsigned char)arg2 size:(unsigned int)arg3 value:(id)arg4;
- (void)replaceValue:(id)arg1;
- (id)promoteUUID:(id)arg1 length:(unsigned char)arg2;
- (BOOL)encodeDataElement:(char *)arg1;
- (unsigned int)getEncodedSize;
- (unsigned char)getHeaderSize;
- (void)updateVariableSizeDescriptor;
- (void)updateFixedSizeDescriptor;
- (BOOL)updateFromArrayValue:(id)arg1;
- (unsigned char)readHeaderData:(char *)arg1 maxLength:(unsigned int)arg2;
- (id)initWithBytes:(char *)arg1 maxLength:(unsigned int)arg2;

@end

