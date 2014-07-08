//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSTimer;

@interface IOBluetoothTransferProgress : NSObject
{
    unsigned short mThreshold;
    int mTransferState;
    unsigned long long mTotalBytes;
    unsigned long long mTransferedBytes;
    unsigned long long mRemainingBytes;
    float mPercentDone;
    unsigned short mMaxPacketLength;
    NSTimer *mUpdateTimer;
    NSDate *mTimeOfTransferStart;
    NSDate *mEndDate;
    double mSecondsRemaining;
    float mSpeedAverages[15];
    int mSpeedIndex;
    int mRateIndex;
    float mTransferRate;
    float mSavedTime;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)updateUI;
- (void)moreBytesTransferred:(unsigned int)arg1;
- (id)getEstimatedTimeRemainingDate;
- (id)getStartTime;
- (double)getTimeElapsed;
- (double)getEstimatedTimeRemaining;
- (float)getByteTransferRate;
- (float)getTransferPercentage;
- (unsigned long long)getRemainingBytes;
- (unsigned long long)getBytesTotal;
- (unsigned long long)getBytesTransferred;
- (void)setPercentDone:(float)arg1;
- (void)setTransferRate:(float)arg1;
- (void)setBytesRemaining:(unsigned long long)arg1;
- (void)setBytesTransferred:(unsigned long long)arg1;
- (void)setSecondsRemaining:(double)arg1;
- (void)setDeterminateThreshold:(unsigned short)arg1;
- (void)setTotalBytes:(unsigned long long)arg1;
- (int)transferState;
- (void)setTransferState:(int)arg1;
- (void)dealloc;
- (id)initWithTotalBytes:(unsigned int)arg1;
- (id)init;

@end

