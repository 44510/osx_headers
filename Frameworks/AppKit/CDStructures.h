//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSData;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AEDesc {
    unsigned int _field1;
    struct OpaqueAEDataStorageType **_field2;
};

struct AudioBuffer {
    unsigned int mNumberChannels;
    unsigned int mDataByteSize;
    void *mData;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGFunctionCallbacks {
    unsigned int _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSRegionObject;

struct CGSize {
    double width;
    double height;
};

struct CMNamedColorPageInfoEntryType {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4[3];
};

struct CMNamedColorPageInfoType {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct CMNamedColorPageInfoEntryType _field4[1];
};

struct CVSMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct DragTarget {
    unsigned int _field1;
    int _field2;
    unsigned int _field3;
    unsigned long long _field4;
};

struct EventTypeSpec {
    unsigned int _field1;
    unsigned int _field2;
};

struct FSRef {
    unsigned char hidden[80];
};

struct HandleTSMEventCompletionContext {
    char _field1;
    int _field2;
    char _field3;
    char _field4;
    struct OpaqueEventRef *_field5;
    unsigned short _field6[128];
    unsigned short *_field7;
    id _field8;
    id _field9;
    id _field10;
    struct _NSRange _field11;
    struct _NSRange _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    unsigned long long _field15;
    unsigned char _field16;
    unsigned int _field17;
    struct _NSRange _field18;
    struct CGRect _field19;
    struct _NSRange _field20;
    struct _NSRange _field21;
    char _field22;
    struct _NSRange _field23;
    long long _field24;
};

struct NSButtonState {
    long long _field1;
    char _field2;
    char _field3;
    char _field4;
};

struct NSIBSnapSet {
    char *_field1;
    char _field2;
};

struct NSMenuServicesViewMetrics {
    unsigned int _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
};

struct NSMenuUpdaterInfo_t {
    struct NSMenuUpdaterInfo_t *_field1;
    CDUnknownBlockType _field2;
    id _field3;
    short _field4;
    unsigned short _field5;
};

struct NSMenuUserKeyEquivalentInfo_t {
    id _field1;
    unsigned long long _field2;
    unsigned char _field3;
};

struct NSNavSimpleButtonState {
    long long _field1;
    char _field2;
    char _field3;
    char _field4;
};

struct NSThreadPrivate {
    unsigned int _field1;
    struct __CFRunLoopObserver *_field2;
    struct __CFRunLoop *_field3;
    id _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    void *_field7;
    long long _field8;
    long long _field9;
    long long _field10;
    long long _field11;
    id _field12;
    id _field13;
    id _field14;
    unsigned long long _field15;
    long long _field16;
    id _field17;
    id _field18;
    struct auxFlags _field19;
};

struct NSTitledFrameResizeInfo {
    char _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGSize _field4;
    struct CGPoint _field5;
    unsigned long long _field6;
};

struct NSToolbarFullScreenContentViewLayout_t {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    struct CGRect _field5;
    struct CGRect _field6;
    struct CGRect _field7;
    struct CGRect _field8;
    struct CGRect _field9;
    struct CGRect _field10;
    struct CGRect _field11;
};

struct NSWindowBatchOrderingTriplet {
    unsigned int _field1;
    unsigned int _field2;
    int _field3;
};

struct NSWorkspaceNotificationCenterSubsystemContext_t {
    id token;
};

struct OpaqueAEDataStorageType;

struct OpaqueCoreDrag {
    unsigned int _field1;
    unsigned int _field2;
    struct DragTarget _field3;
    struct DragTarget _field4;
    struct CGPoint _field5;
    struct CGPoint _field6;
    struct CGPoint _field7;
    struct CGPoint _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    struct AEDesc _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    int _field17;
    unsigned int _field18;
    unsigned int _field19;
    unsigned int _field20;
    unsigned int _field21;
    struct CGPoint _field22;
    unsigned char _field23;
    struct CGSRegionObject *_field24;
    struct CGPoint _field25;
    void *_field26;
    void *_field27;
    void *_field28;
    struct CGRect _field29;
    struct CGRect _field30;
    short _field31;
    short _field32;
    short _field33;
    short _field34;
    struct __CFRunLoopTimer *_field35;
    struct __CFRunLoopTimer *_field36;
    struct __CFRunLoopTimer *_field37;
    double _field38;
    float _field39;
    double _field40;
    int _field41;
    unsigned int _field42;
    struct CGPoint _field43;
    struct __CFString *_field44;
    struct __CFDictionary *_field45;
    struct __CFDictionary *_field46;
    void *_field47;
    CDUnknownFunctionPointerType _field48;
    CDUnknownFunctionPointerType _field49;
    CDUnknownFunctionPointerType _field50;
    void *_field51;
    unsigned int _field52;
    struct OpaquePasteboardRef *_field53;
    struct OpaqueCoreDrag *_field54;
    struct __CFString *_field55;
    unsigned int _field56;
    CDUnknownFunctionPointerType _field57;
    void *_field58;
    long long _field59;
    struct __CFDictionary *_field60;
    struct __CFDictionary *_field61;
};

struct OpaqueEventRef;

struct OpaqueMenuRef;

struct OpaquePasteboardRef;

struct PATHSEGMENT {
    unsigned int :4;
    unsigned int :60;
    struct CGPoint _field1;
};

struct Point {
    short _field1;
    short _field2;
};

struct ProcessSerialNumber {
    unsigned int _field1;
    unsigned int _field2;
};

struct SpeechChannelRecord {
    long long _field1[1];
};

struct WorkspaceKVOData_t {
    id _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    char _field4;
};

struct _CGEventProcess {
    int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _CGGestureData {
    unsigned int _field1;
    unsigned long long _field2;
    _Bool _field3;
    _Bool _field4;
    unsigned char _field5;
    unsigned char _field6;
    unsigned int _field7;
    float _field8;
    unsigned short _field9;
    unsigned char _field10;
    union {
        struct {
            float _field1;
            float _field2;
            float _field3;
            int _field4[8];
        } _field1;
        CDStruct_6f4e2a38 _field2;
        struct {
            float _field1;
            float _field2;
            float _field3;
            unsigned int _field4;
            int _field5[7];
        } _field3;
        struct {
            unsigned int _field1;
            unsigned int _field2;
            unsigned int _field3;
            float _field4;
            float _field5;
            float _field6;
            float _field7;
            float _field8;
            float _field9;
            unsigned int _field10;
            unsigned int _field11;
        } _field4;
        struct {
            unsigned int _field1;
            unsigned int _field2;
            int _field3[9];
        } _field5;
        CDStruct_6f4e2a38 _field6;
        CDStruct_03592c8a _field7;
        CDStruct_03592c8a _field8;
    } _field11;
};

struct _CGSEventRecord {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct CGPoint _field5;
    struct CGPoint _field6;
    unsigned long long _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    struct __CGEventSourceData {
        int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned long long _field5;
        unsigned int _field6;
        unsigned short _field7;
        unsigned char _field8;
        unsigned char _field9;
        unsigned long long _field10;
    } _field11;
    struct _CGEventProcess _field12;
    union {
        CDStruct_e29a92ac _field1;
        CDStruct_e29a92ac _field2;
        struct {
            unsigned short _field1;
            short _field2;
            unsigned short _field3;
            unsigned short _field4;
            unsigned short _field5;
            short _field6;
            short _field7;
            char _field8;
            unsigned char _field9;
            unsigned int _field10;
            unsigned int _field11;
            unsigned int _field12;
            unsigned int _field13;
            unsigned short _field14[20];
        } _field3;
        struct {
            short _field1;
            short _field2;
            int _field3;
            int _field4;
            unsigned int _field5;
            long long _field6;
            long long _field7;
            int _field8[8];
        } _field4;
        struct {
            unsigned short _field1;
            unsigned short _field2;
            unsigned int _field3;
            unsigned int _field4;
            int _field5;
            int _field6;
            int _field7;
            int _field8;
            int _field9;
            int _field10;
            int _field11;
            int _field12;
            int _field13[5];
        } _field5;
        CDStruct_2e65c88c _field6;
        CDStruct_2e65c88c _field7;
        struct _CGSTabletPointData _field8;
        struct _CGSTabletProximityData _field9;
        struct {
            short _field1;
            short _field2;
            union {
                float _field1[15];
                int _field2[15];
                short _field3[30];
                char _field4[60];
            } _field3;
        } _field10;
        struct {
            short _field1;
            short _field2;
            unsigned int _field3;
            unsigned long long _field4;
            unsigned short _field5;
            short _field6;
            int _field7[11];
        } _field11;
        struct _CGGestureData _field12;
    } _field13;
    void *_field14;
    unsigned short _field15;
    unsigned short _field16;
    struct __CGSEventAppendix *_field17;
    unsigned int _field18;
    _Bool _field19;
    struct __CFData *_field20;
};

struct _CGSTabletPointData {
    int _field1;
    int _field2;
    int _field3;
    unsigned short _field4;
    unsigned short _field5;
    struct {
        short _field1;
        short _field2;
    } _field6;
    unsigned short _field7;
    short _field8;
    unsigned short _field9;
    short _field10;
    short _field11;
    short _field12;
};

struct _CGSTabletProximityData {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned int _field7;
    unsigned long long _field8;
    unsigned int _field9;
    unsigned char _field10;
    unsigned char _field11;
    short _field12;
};

struct _NSBrowserColumnResizeInfo {
    char _field1;
    char _field2;
    char _field3;
    id _field4;
    long long _field5;
    double _field6;
    struct CGSize _field7;
};

struct _NSCarbonMenuSearchReturn {
    id _field1;
    struct OpaqueMenuRef *_field2;
    unsigned short _field3;
};

struct _NSImageCellAnimationState {
    id _field1;
    double _field2;
    long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
};

struct _NSModalSession {
    id _field1;
    id _field2;
    struct _NSModalSession *_field3;
    int _field4;
    char _field5;
    long long _field6;
    unsigned long long _field7;
    char _field8;
    char _field9;
    short _field10;
    long long _field11;
    id _field12;
    id _field13;
    SEL _field14;
    void *_field15;
    long long _field16;
    id _field17;
    CDUnknownBlockType _field18;
};

struct _NSNibFlags {
    unsigned int _isKeyed:1;
    unsigned int _inheritsDecodeTimeBundle:1;
    unsigned int _inheritsDecodeTimePath:1;
    unsigned int _reserved:29;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSToolbarMotion {
    double _field1;
    double _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    double _field5;
    double _field6;
};

struct _NSViewTrackingRect {
    long long _field1;
    struct _NSViewTrackingRect *_field2;
};

struct _PrivatePrintOperationInfo {
    struct CGRect _field1;
    struct CGRect _field2;
    char _field3;
    char _field4;
    char _field5;
    char _field6;
    char _field7;
    char _field8;
    char _field9;
    char _field10;
    long long _field11;
    long long _field12;
    long long _field13;
    long long _field14;
    long long _field15;
    long long _field16;
    long long _field17;
    id _field18;
    id _field19;
    struct CGRect _field20;
    char _field21;
    char _field22;
    char _field23;
    long long _field24;
    double _field25;
    double _field26;
    double _field27;
    double _field28;
    long long _field29;
    long long _field30;
    struct CGPoint _field31;
    unsigned int _field32;
    void *_field33;
    long long _field34;
    long long _field35;
    char _field36;
    long long _field37;
    long long _field38;
    long long _field39;
    id _field40;
    char _field41;
    id _field42;
    long long _field43;
    char _field44;
    id _field45;
    id _field46;
    long long _field47;
    id _field48;
    double *_field49;
    long long _field50;
    double *_field51;
    long long _field52;
};

struct _SelectionAnchor {
    long long _field1;
    long long _field2;
    long long _field3;
};

struct _TvFlags3 {
    unsigned int delayStartEditingCalled:1;
    unsigned int drawingRowBackground:1;
    unsigned int performingHitTest:1;
    unsigned int subclassOverridesDrawBackgroundInRect:1;
    unsigned int subclassOverridesDrawGridInClipRect:1;
    unsigned int subclassOverridesDrawRect:1;
    unsigned int shouldFloatGroupRows:1;
    unsigned int useUncachedRectOfRow:1;
    unsigned int delegateRespondsTo_viewForRow:1;
    unsigned int delegateRespondsTo_viewForTableColumnRow:1;
    unsigned int subscribedToWindowWillOrderOnScreen:1;
    unsigned int supressRowChangedNotifications:1;
    unsigned int drawingEverything:1;
    unsigned int flashingDropFeedbackRow:1;
    unsigned int wantsFirstResponderOnlyOnNonMouseEvents:1;
    unsigned int selectionChangingType:2;
    unsigned int selectionType:2;
    unsigned int delegateRespondsTo_shouldReorderColumn:1;
    unsigned int unarchiving:1;
    unsigned int subclassOverrides_selectMultiIndexVersion:1;
    unsigned int tileNeeded:1;
    unsigned int delegateRespondsTo_isGroupRow:1;
    unsigned int delegateRespondsTo_selectionIndexesForProposedSelection:1;
    unsigned int delegateRespondsTo_dataCellForRow:1;
    unsigned int drawingContextMenuHighlightOnAllSelectedRows:1;
    unsigned int drawingContextMenuHighlight:1;
    unsigned int allowsTypeSelect:1;
    unsigned int editOnSingleClick:1;
    unsigned int delegateRespondsTo_shouldTrackCell:1;
    unsigned int hasRowHeaderView:1;
};

struct __CFDictionary;

struct __CFRunLoopTimer;

struct __CFString;

struct __NSKeyValueCodingControllerModeType {
    long long mode;
    unsigned long long index;
    id indexPath;
};

struct __NSToolbarLayoutMetrics {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
};

struct __NSToolbarMetrics {
    struct __NSToolbarLayoutMetrics _field1;
    struct __NSToolbarItemLayoutMetrics {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
        double _field5;
        double _field6;
        double _field7;
        double _field8;
        double _field9;
        double _field10;
        double _field11;
        double _field12;
        double _field13;
        double _field14;
        double _field15;
    } _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct auxFlags {
    unsigned int :1;
    unsigned int :31;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    SEL _field2;
    SEL _field3;
    SEL _field4;
} CDStruct_4fdc8b6f;

typedef struct {
    id _field1;
    SEL _field2;
    void *_field3;
} CDStruct_f8f0024c;

typedef struct {
    id _field1;
    SEL _field2;
} CDStruct_b2dc443c;

typedef struct {
    NSData *stream;
    char *currentPtr;
    char *endPtr;
} CDStruct_d87b8232;

typedef struct {
    unsigned int _field1;
    int _field2[10];
} CDStruct_03592c8a;

typedef struct {
    unsigned long long serial;
    unsigned long long timestamp;
    unsigned long long delta;
} CDStruct_c75109f2;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    char *data;
    int len;
} CDStruct_815caf98;

typedef struct {
    char _field1;
    char _field2;
    double _field3;
} CDStruct_8e9e3288;

typedef struct {
    char _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    char _field11;
    long long _field12;
} CDStruct_ed2960be;

typedef struct {
    double minPossiblePosition;
    double minAllowablePosition;
    double maxAllowablePosition;
    double maxPossiblePosition;
    char canCollapseBeforeView;
    char canCollapseAfterView;
} CDStruct_0a28aba5;

typedef struct {
    double top;
    double left;
    double bottom;
    double right;
} CDStruct_3c058996;

typedef struct {
    float _field1;
    int _field2[10];
} CDStruct_6f4e2a38;

typedef struct {
    long long _field1;
    unsigned int _field2;
} CDStruct_0f3e1ffa;

typedef struct {
    long long generationCount;
    long long changeCount;
} CDStruct_df2dc5d0;

typedef struct {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    unsigned int _field11;
    int _field12;
    int _field13;
    unsigned int _field14;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :29;
    unsigned int _field15;
    unsigned int _field16;
    int _field17[1];
} CDStruct_2e65c88c;

typedef struct {
    unsigned int _field1;
    int _field2;
    long long _field3;
    unsigned long long _field4;
    double _field5;
    long long _field6;
    struct CVSMPTETime _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} CDStruct_e50ab651;

typedef struct {
    double _currentDate;
    double _birthDate;
    double _lastDate;
    struct {
        unsigned int _skipped:1;
        unsigned int _reserved:31;
    } _flags;
} CDStruct_d41e72e8;

typedef struct {
    CDStruct_3c058996 _field1;
    CDStruct_3c058996 _field2;
    CDStruct_3c058996 _field3;
    id *_field4;
    CDStruct_3c058996 _field5;
    CDStruct_3c058996 _field6;
    id *_field7;
    id _field8;
} CDStruct_8b448fe9;

typedef struct {
    struct CGSize _field1;
    struct CGSize _field2;
    struct CGSize _field3;
    unsigned long long _field4;
    unsigned long long _field5;
} CDStruct_22276b4c;

typedef struct {
    unsigned int :4;
    unsigned int :1;
    unsigned int :24;
    union {
        char *_field1;
        struct *_field2;
        struct __CFDictionary *_field3;
    } _field1;
} CDStruct_d48118a8;

typedef struct {
    long long _field1;
    id _field2;
    id _field3;
    struct CGRect _field4;
    double _field5;
    char _field6;
    char _field7;
} CDStruct_602775a4;

typedef struct {
    unsigned char _field1;
    unsigned char _field2;
    short _field3;
    int _field4;
    unsigned char _field5;
    char _field6;
    unsigned char _field7;
    unsigned char _field8;
    short _field9;
    short _field10;
    union {
        struct _CGSTabletPointData _field1;
        struct _CGSTabletProximityData _field2;
    } _field11;
    unsigned int :1;
    unsigned int :31;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
} CDStruct_e29a92ac;

// Ambiguous groups
typedef struct {
    unsigned int _inDealloc:1;
    unsigned int _reserved:31;
} CDStruct_8f76168e;

typedef struct {
    unsigned int isCursorInTarget:1;
    unsigned int reserved:31;
} CDStruct_af82842b;

typedef struct {
    unsigned int _reserved:32;
} CDStruct_4a40d4f7;

typedef struct {
    unsigned int reserved:32;
} CDStruct_9fab449c;

