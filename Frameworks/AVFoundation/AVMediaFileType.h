//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet, NSString;

@interface AVMediaFileType : NSObject <NSCopying>
{
    NSString *_uti;
    long long _supportsSampleReferencesOnce;
    BOOL _supportsSampleReferences;
}

+ (id)isoFileTypes;
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id *)arg2;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;
+ (id)allFileTypeIdentifiers;
+ (void)initialize;
- (BOOL)supportsFormat:(struct opaqueCMFormatDescription *)arg1;
- (BOOL)supportsOutputSettings:(id)arg1 reason:(id *)arg2;
@property(readonly, nonatomic) unsigned int audioFileTypeID;
@property(readonly, nonatomic) NSString *figFormatReaderFileFormat;
@property(readonly, nonatomic) NSString *UTI;
@property(readonly, nonatomic) BOOL supportsSampleReferences;
@property(readonly, nonatomic) NSSet *supportedMediaTypes;
@property(readonly, nonatomic) NSString *defaultFileExtension;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id *)arg2;

@end

