//
//  ANPlayerView.h
//  ANPlayer
//
//  Created by Qianrun on 17/3/7.
//  Copyright © 2017年 qianrun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "ANPlayerLoadingView.h"
#import "ANPlayerControl.h"
#import "ANPlayerPlayPausedView.h"

#define kAN_SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)
#define kAN_SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)

/**
 设置视频播放填充模式
 */
typedef NS_ENUM(NSInteger,ANPlayerContentMode) {
    ANPlayerContentModeResizeFit,//尺寸适合
    ANPlayerContentModeResizeFitFill,//填充视图
    ANPlayerContentModeResize,//默认
};
typedef NS_ENUM(NSInteger,ANPlayerState) {
    ANPlayerStateFailed,        // 播放失败
    ANPlayerStateBuffering,     // 缓冲中
    ANPlayerStatePlaying,       // 播放中
    ANPlayerStateStopped,        //停止播放
};

@interface ANPlayerView : UIView

//urlAsset
@property (nonatomic,strong) AVURLAsset *assert;

//当前时间
@property (nonatomic,assign) CMTime currentTime;

//加载视图
@property (nonatomic,strong) ANPlayerLoadingView *loadingView;

//播放状态
@property (nonatomic,assign) ANPlayerState state;

//播放器控制视图
@property (nonatomic,strong) ANPlayerControl *playerControl;

//是否正在播放
@property (nonatomic,assign,readonly) BOOL isPlaying;

//当视频没有播放为0,播放后是1
@property (nonatomic,assign) NSInteger isNormal;

//暂停时的插图
@property (nonatomic,strong) ANPlayerPlayPausedView *playPausedView;


//视频填充模式
@property (nonatomic,assign) ANPlayerContentMode contentMode;

//加载的image;
@property (nonatomic,strong) UIImageView *imageViewLogin;

- (id)initWithURL:(NSURL *)videoURL;

//跳到某个播放时间段
-(void)seekToTime:(CMTime)time;
//播放
-(void)play;
//暂停
-(void)pause;
//停止
-(void)stop;
//移除监听,notification,dealloc
-(void)remove;
//显示或者隐藏暂停按键
-(void)hideOrShowPauseView;

- (instancetype)initWithURLAsset:(AVURLAsset *)asset;
@end
