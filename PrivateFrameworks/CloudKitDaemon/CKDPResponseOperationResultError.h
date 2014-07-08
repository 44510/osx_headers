//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPResponseOperationResultErrorClient, CKDPResponseOperationResultErrorExtension, CKDPResponseOperationResultErrorServer, NSString;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying>
{
    CKDPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorInternal;
    NSString *_errorKey;
    CKDPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer *_serverError;
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;
}

@property(retain, nonatomic) NSString *errorInternal; // @synthesize errorInternal=_errorInternal;
@property(retain, nonatomic) NSString *errorKey; // @synthesize errorKey=_errorKey;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) int retryAfterSeconds; // @synthesize retryAfterSeconds=_retryAfterSeconds;
@property(retain, nonatomic) CKDPResponseOperationResultErrorExtension *extensionError; // @synthesize extensionError=_extensionError;
@property(retain, nonatomic) CKDPResponseOperationResultErrorServer *serverError; // @synthesize serverError=_serverError;
@property(retain, nonatomic) CKDPResponseOperationResultErrorClient *clientError; // @synthesize clientError=_clientError;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasErrorInternal;
@property(readonly, nonatomic) BOOL hasErrorKey;
@property(readonly, nonatomic) BOOL hasErrorDescription;
@property(nonatomic) BOOL hasRetryAfterSeconds;
@property(readonly, nonatomic) BOOL hasExtensionError;
@property(readonly, nonatomic) BOOL hasServerError;
@property(readonly, nonatomic) BOOL hasClientError;

@end
