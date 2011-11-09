/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSMutableArray, NSString, VMUProcessDescription, NSConditionLock, VMUTaskMemoryCache, NSMapTable;

@interface VMUSampler : NSObject  {
    int _pid;
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    BOOL _recordThreadStates;
    BOOL _taskIs64Bit;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    } _symbolicator;
    VMUTaskMemoryCache *_memCache;
    struct sampling_context_t { } *_samplingContext;
    unsigned int _mainThread;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int _numberOfCopiedBacktraces;
    unsigned int *_previousThreadList;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    BOOL _sampling;
    unsigned int _samplingThreadPort;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    BOOL _stacksFixed;
    void *_cfi;
    id _delegate;
    double _timeSpentSamplingWithoutCFI;
    double _timeSpentSamplingWithCFI;
    BOOL _shouldOutputSignature;
    BOOL _showDispatchQueueNames;
}

+ (void)initialize;
+ (id)sampleAllThreadsOfPID:(int)arg1 withSymbolicator:(id)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 withSymbolicator:(id)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 withSymbolicator:(id)arg2 symbolicate:(BOOL)arg3;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(BOOL)arg2;

- (BOOL)waitUntilDone;
- (BOOL)start;
- (void)setDelegate:(id)arg1;
- (void)finalize;
- (BOOL)stop;
- (id)delegate;
- (int)pid;
- (id)initWithPID:(int)arg1 options:(unsigned int)arg2;
- (id)sampleThread:(unsigned int)arg1;
- (double)samplingInterval;
- (double)timeLimit;
- (void)setSampleLimit:(unsigned int)arg1;
- (unsigned int)sampleLimit;
- (void)setRecordThreadStates:(BOOL)arg1;
- (void)setShouldOutputSignature:(BOOL)arg1;
- (BOOL)shouldOutputSignature;
- (struct _CSTypeRef { unsigned int x1; unsigned int x2; })symbolicator;
- (id)samples;
- (unsigned int)sampleCount;
- (void)flushData;
- (id)threadNameForThread:(unsigned int)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (void)preloadSymbols;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (void)forceStop;
- (void)writeOutput:(id)arg1 append:(BOOL)arg2;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned int)arg3;
- (void)_makeHighPriority;
- (void)initializeSamplingContext:(BOOL)arg1;
- (unsigned int)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4;
- (void)_makeTimeshare;
- (id)initWithPID:(int)arg1;
- (id)sampleAllThreadsOnce;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)_fixupStacks:(id)arg1;
- (void)_runSamplingThread;
- (void)setSamplingInterval:(double)arg1;
- (void)setTimeLimit:(double)arg1;
- (void)stopSampling;
- (id)stopSamplingAndReturnCallNode;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(BOOL*)arg2 returnedThreadId:(unsigned long long*)arg3;
- (id)initWithTask:(unsigned int)arg1;
- (void)dealloc;
- (unsigned int)mainThread;

@end