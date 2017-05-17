//
//  UIColor+XMRGBAColor.h
//  XMRGBAColor
//
//  Created by xuming on 2017/5/17.
//  Copyright © 2017年 NationSky. All rights reserved.
//

#import <UIKit/UIKit.h>
/*
 RGB色彩就是常说的三原色，R代表Red（红色），G代表Green（绿色），B代表Blue（蓝色）
 */


/**
 rgba

 @param r r
 @param g g
 @param b b
 @param a a
 @return UIColor
 */
#define xm_rgba(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]

/**
 rgb

 @param r r
 @param g g
 @param b b
 @return UIClor
 */
#define xm_rgb(r,g,b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1.0]

/*
 (1)色相H( Hue )：在0~360°的标准色轮上，色相是按位置度量的。在通常的使用中，色相是由颜色名称标识的，比如红、绿或橙色。
 (2)饱和度S( saturation )：是指颜色的强度或纯度。饱和度表示色相中彩色成分所占的比例，用从0(灰色)~100%(完全饱和)的百分比来度量。在标准色轮上饱和度是从中心逐渐向边缘递增的。
 (3)亮度B( brightness )：是颜色的相对明暗程度，通常是从0(黑)~100%(白)的百分比来度量的
 */

/**
 hsba

 @param h h
 @param s s
 @param b b
 @param a a
 @return UIClor
 */
#define xm_hsba(h,s,b,a) [UIColor colorWithHue:h/360.0f saturation:s/100.0f brightness:b/100.0f alpha:a]
/**
 hsb

 @param h h
 @param s s
 @param b b
 @return UIColor
 */
#define xm_hsb(h,s,b) [UIColor colorWithHue:h/360.0f saturation:s/100.0f brightness:b/100.0f alpha:1.0]

@interface UIColor (XMRGBAColor)


/**
 随机颜色

 @return UIColor
 */
+ (UIColor *)xm_randomColor;

/**
 输入十六进制RGB颜色值返回UIColor

 @param hex hex (0xAABBCC)
 @return UIColor
 */
+ (UIColor *)xm_colorWithRGBHex:(UInt32)hex;

/**
 输入十六进制RGB颜色值的字符串返回UIColor

 @param stringToConvert stringToConvert （@"AABBCC"）
 @return UIColor
 */
+ (UIColor *)xm_colorWithRGBHexString:(NSString *)stringToConvert;
/**
 输入十六进制RGB颜色值返回UIColor
 
 @param hex hex (0xFFAABBCC)
 @return UIColor
 */
+ (UIColor *)xm_colorWithARGBHex:(UInt64)hex;
/**
 输入十六进制RGB颜色值的字符串返回UIColor
 
 @param stringToConvert stringToConvert （@"FFAABBCC"）
 @return UIColor
 */
+ (UIColor *)xm_colorWithARGBHexString:(NSString *)stringToConvert;

@end
