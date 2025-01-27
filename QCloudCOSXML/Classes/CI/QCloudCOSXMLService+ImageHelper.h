//
//  QCloudCOSXMLService+ImageHelper.h
//  Pods-QCloudCOSXMLDemo
//
//  Created by garenwang on 2020/6/8.
//

#import "QCloudCOSXMLService.h"
@class QCloudPutObjectWatermarkRequest;
@class QCloudGetFilePreviewRequest;
@class QCloudGetGenerateSnapshotRequest;
@class QCloudCICloudDataOperationsRequest;
@class QCloudCIPutObjectQRCodeRecognitionRequest;
@class QCloudQRCodeRecognitionRequest;
@class QCloudCIPicRecognitionRequest;
@class QCloudGetDescribeMediaBucketsRequest;
@class QCloudGetMediaInfoRequest;
@class QCloudGetVideoRecognitionRequest;
@class QCloudPostVideoRecognitionRequest;
@class QCloudGetAudioRecognitionRequest;
@class QCloudPostAudioRecognitionRequest;
@class QCloudGetTextRecognitionRequest;
@class QCloudPostTextRecognitionRequest;
@class QCloudGetDocRecognitionRequest;
@class QCloudPostDocRecognitionRequest;
@class QCloudGetWebRecognitionRequest;
@class QCloudPostWebRecognitionRequest;
@class QCloudBatchimageRecognitionRequest;
@class QCloudSyncImageRecognitionRequest;
@class QCloudGetImageRecognitionRequest;
@class QCloudUpdateAudioDiscernTaskQueueRequest;
@class QCloudGetAudioDiscernTaskQueueRequest;
@class QCloudBatchGetAudioDiscernTaskRequest;
@class QCloudGetAudioDiscernTaskRequest;
@class QCloudPostAudioDiscernTaskRequest;
@class QCloudGetAudioDiscernOpenBucketListRequest;

NS_ASSUME_NONNULL_BEGIN

@interface QCloudCOSXMLService (ImageHelper)

/**
盲水印功能.
*/
- (void)PutWatermarkObject:(QCloudPutObjectWatermarkRequest *)request;

/**
COS 文档预览方法.
*/
- (void)GetFilePreviewObject:(QCloudGetFilePreviewRequest *)request;

- (void)GetGenerateSnapshot:(QCloudGetGenerateSnapshotRequest *)request;
//云上数据处理
- (void)CloudDataOperations:(QCloudCICloudDataOperationsRequest *)request;
/**
 上传时识别二维码
 */
- (void)PutObjectQRCodeRecognition:(QCloudCIPutObjectQRCodeRecognitionRequest *)request;
/**
 下载时识别二维码
 */
- (void)CIQRCodeRecognition:(QCloudQRCodeRecognitionRequest *)request;

/// 图片标签
- (void)CIPicRecognition:(QCloudCIPicRecognitionRequest *)request;

- (void)CIGetDescribeMediaBuckets:(QCloudGetDescribeMediaBucketsRequest *)request;

- (void)CIGetMediaInfo:(QCloudGetMediaInfoRequest *)request;

/// 图片审核
- (void)BatchImageRecognition:(QCloudBatchimageRecognitionRequest *)request;
- (void)SyncImageRecognition:(QCloudSyncImageRecognitionRequest *)request;
- (void)GetImageRecognition:(QCloudGetImageRecognitionRequest *)request;

/// 视频审核
- (void)GetVideoRecognition:(QCloudGetVideoRecognitionRequest *)request;
- (void)PostVideoRecognition:(QCloudPostVideoRecognitionRequest *)request;

/// 音频审核
- (void)PostAudioRecognition:(QCloudPostAudioRecognitionRequest *)request;
- (void)GetAudioRecognition:(QCloudGetAudioRecognitionRequest *)request;

/// 文本审核
- (void)GetTextRecognition:(QCloudGetTextRecognitionRequest *)request;
- (void)PostTextRecognition:(QCloudPostTextRecognitionRequest *)request;

/// 文档审核
- (void)PostDocRecognition:(QCloudPostDocRecognitionRequest *)request;
- (void)GetDocRecognition:(QCloudGetDocRecognitionRequest *)request;

/// 网页审核
- (void)GetWebRecognition:(QCloudGetWebRecognitionRequest *)request;
- (void)PostWebRecognition:(QCloudPostWebRecognitionRequest *)request;

/// 更新语音识别队列
-(void)UpdateAudioDiscernTaskQueue:(QCloudUpdateAudioDiscernTaskQueueRequest *)request;

/// 查询语音识别队列
-(void)GetAudioDiscernTaskQueue:(QCloudGetAudioDiscernTaskQueueRequest *)request;

/// 批量拉取语音识别任务
-(void)BatchGetAudioDiscernTask:(QCloudBatchGetAudioDiscernTaskRequest *)request;

/// 查询指定的语音识别任务
-(void)GetAudioDiscernTask:(QCloudGetAudioDiscernTaskRequest *)request;

/// 提交语音识别任务
-(void)PostAudioDiscernTask:(QCloudPostAudioDiscernTaskRequest *)request;

/// 查询存储桶是否已开通语音识别功能。
-(void)GetAudioDiscernOpenBucketList:(QCloudGetAudioDiscernOpenBucketListRequest *)request;
@end

NS_ASSUME_NONNULL_END
