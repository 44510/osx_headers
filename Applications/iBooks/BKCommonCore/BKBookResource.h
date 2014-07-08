//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSOrthography, NSString;

@interface BKBookResource : NSObject
{
    NSString *_href;
    NSString *_mime;
    NSString *_compressionAlgorithm;
    NSString *_encryptionAlgorithm;
    NSNumber *_documentOrdinal;
    NSNumber *_fileSize;
    NSNumber *_hasTocElements;
    NSNumber *_hasLandmarkElements;
    NSNumber *_hasPhysicalElements;
    NSNumber *_nonlinearElement;
    NSString *_mediaOverlayHref;
    NSNumber *_mediaOverlayParsed;
    NSNumber *_sinfNumber;
    NSString *_fallbackId;
    NSString *_manifestId;
    NSString *_manifestProperties;
    NSOrthography *_orthography;
}

@property(retain, nonatomic) NSOrthography *orthography; // @synthesize orthography=_orthography;
@property(retain, nonatomic) NSString *manifestProperties; // @synthesize manifestProperties=_manifestProperties;
@property(retain, nonatomic) NSString *manifestId; // @synthesize manifestId=_manifestId;
@property(retain, nonatomic) NSString *fallbackId; // @synthesize fallbackId=_fallbackId;
@property(retain, nonatomic) NSNumber *sinfNumber; // @synthesize sinfNumber=_sinfNumber;
@property(retain, nonatomic) NSNumber *mediaOverlayParsed; // @synthesize mediaOverlayParsed=_mediaOverlayParsed;
@property(retain, nonatomic) NSString *mediaOverlayHref; // @synthesize mediaOverlayHref=_mediaOverlayHref;
@property(retain, nonatomic) NSNumber *nonlinearElement; // @synthesize nonlinearElement=_nonlinearElement;
@property(retain, nonatomic) NSNumber *hasPhysicalElements; // @synthesize hasPhysicalElements=_hasPhysicalElements;
@property(retain, nonatomic) NSNumber *hasLandmarkElements; // @synthesize hasLandmarkElements=_hasLandmarkElements;
@property(retain, nonatomic) NSNumber *hasTocElements; // @synthesize hasTocElements=_hasTocElements;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSNumber *documentOrdinal; // @synthesize documentOrdinal=_documentOrdinal;
@property(retain, nonatomic) NSString *encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
@property(retain, nonatomic) NSString *compressionAlgorithm; // @synthesize compressionAlgorithm=_compressionAlgorithm;
@property(retain, nonatomic) NSString *mime; // @synthesize mime=_mime;
@property(retain, nonatomic) NSString *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (id)description;

@end

