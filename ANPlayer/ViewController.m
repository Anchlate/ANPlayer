//
//  ViewController.m
//  ANPlayer
//
//  Created by Qianrun on 17/3/7.
//  Copyright © 2017年 qianrun. All rights reserved.
//

#import "ViewController.h"
#import "ANPlayerView.h"
#import "Masonry.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    NSURL *url = [NSURL URLWithString:@"http://download.3g.joy.cn/video/236/60236937/1451280942752_hd.mp4"];
    
    ANPlayerView *palyerView = [[ANPlayerView alloc]initWithURL:url];
    
    palyerView.backgroundColor = [UIColor redColor];
    [self.view addSubview:palyerView];
    
    [palyerView mas_makeConstraints:^(MASConstraintMaker *make) {
        
        make.leading.trailing.equalTo(self.view);
        make.height.mas_equalTo(200);
        make.centerY.equalTo(self.view);
        
    }];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
