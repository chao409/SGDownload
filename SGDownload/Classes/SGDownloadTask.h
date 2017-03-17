//
//  SGDownloadTask.h
//  SGDownload
//
//  Created by Single on 2017/3/17.
//  Copyright © 2017年 single. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, SGDownloadTaskState) {
    SGDownloadTaskStateNone,
    SGDownloadTaskStateWaiting,
    SGDownloadTaskStateRunning,
    SGDownloadTaskStateSuspend,
    SGDownloadTaskStateFinished,
    SGDownloadTaskStateCanceled,
    SGDownloadTaskStateFaiulred,
};

@interface SGDownloadTask : NSObject

@property (nonatomic, assign) SGDownloadTaskState state;

@property (nonatomic, copy) NSURL * contentURL;
@property (nonatomic, copy) NSURL * fileURL;

@property (nonatomic, assign) int64_t bytesWritten;
@property (nonatomic, assign) int64_t totalBytesWritten;
@property (nonatomic, assign) int64_t totalBytesExpectedToWrite;

// about resume
@property (nonatomic, strong) NSData * resumeInfoData;
@property (nonatomic, assign) int64_t resumeFileOffset;
@property (nonatomic, assign) int64_t resumeExpectedTotalBytes;

@property (nonatomic, strong) NSError * error;

@end
