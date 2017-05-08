//
//  ANPlayerControl.h
//  ANPlayer
//
//  Created by Qianrun on 17/3/7.
//  Copyright © 2017年 qianrun. All rights reserved.
//

#import <UIKit/UIKit.h>

//播放控制器进度条代理方法
@protocol ANPlayerControlSliderDelegate<NSObject>
//发送进度条当前值
-(void)sendCurrentValueToPlayer:(CGFloat)value;
@end
typedef NS_ENUM(NSInteger,ANPlayerControlScalling) {
    ANPlayerControlScallingNormal,
    ANPlayerControlScallingLarge,//全屏
};

@interface ANPlayerControl : UIView

//进度条最小值
@property (nonatomic,assign) CGFloat minValue;
//进度条最大值
@property (nonatomic,assign) CGFloat maxValue;
//当前值
@property (nonatomic,assign) CGFloat currentValue;
//缓冲值
@property (nonatomic,assign) CGFloat bufferValue;
//当前播放时间
@property (nonatomic,strong) UILabel *trackingTimeLabel;
//最大时间Label
@property (nonatomic,strong) UILabel *totalTimeLabel;

@property (nonatomic,assign) ANPlayerControlScalling scalling;

@property (nonatomic,weak) id<ANPlayerControlSliderDelegate>delegate;

@end
