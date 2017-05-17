//
//  ViewController.m
//  XMRGBAColor
//
//  Created by xuming on 2017/5/17.
//  Copyright © 2017年 NationSky. All rights reserved.
//

#import "ViewController.h"
#import "UIColor+XMRGBAColor.h"
@interface ViewController ()
@property (strong, nonatomic) IBOutlet UIView *view1;
@property (strong, nonatomic) IBOutlet UIView *view2;
@property (strong, nonatomic) IBOutlet UIView *view3;
@property (strong, nonatomic) IBOutlet UIView *view4;
@property (strong, nonatomic) IBOutlet UIView *view5;
@property (strong, nonatomic) IBOutlet UIView *view6;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor xm_randomColor];
    self.view1.backgroundColor = xm_rgba(20, 66, 240, 0.9);
//    self.view2.backgroundColor = xm_rgb(20, 66, 240);
//    self.view1.backgroundColor = xm_hsba(100, 30, 80, 1);
    self.view2.backgroundColor = xm_hsb(80, 20, 60);
    self.view3.backgroundColor = [UIColor xm_colorWithRGBHex:0x2288AA];
    self.view4.backgroundColor = [UIColor xm_colorWithRGBHexString:@"2288AA"];
    self.view5.backgroundColor = [UIColor xm_colorWithARGBHex:0xFF2288AA];
    self.view6.backgroundColor = [UIColor xm_colorWithARGBHexString:@"FF2288AA"];

}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
