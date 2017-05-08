//
//  ANPlayerPlayPausedView.h
//  ANPlayer
//
//  Created by Qianrun on 17/3/7.
//  Copyright © 2017年 qianrun. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,SBPlayerControlState) {
    SBControlStateNormal,
    SBControlStateSelected,
};

@protocol ANPlayerPlayPausedViewDelegate<NSObject>

@required
-(void)sendPlayOrPausedValueToPlayer;
@end


@interface ANPlayerPlayPausedView : UIView

@property (nonatomic,strong) UIButton *playPauseBtn;
@property (nonatomic,assign) SBPlayerControlState state;
@property (nonatomic,weak) id<ANPlayerPlayPausedViewDelegate> delegate;
@property (nonatomic,assign) NSInteger backBtnTouched;

//总时间
@property (nonatomic,strong) UILabel *totalTime;
//标题
@property (nonatomic,strong) UILabel *title;
//返回
@property (nonatomic,strong) UIButton *backBtn;
-(void)show;
-(void)hide;

@end
