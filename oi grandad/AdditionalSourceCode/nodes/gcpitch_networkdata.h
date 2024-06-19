namespace project
{

struct gcpitch_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "gcpitch";
	}
	bool isModNode() const override
	{
		return true;
	}
	String getNetworkData() const override
	{
		return "3414.nT6K8CZrfD..UoF.59FRSjBvRFWbqDiPzJdW8oXsqOJfk8+WUSro7tI6lrM.baCGEDiUHHj+Jk+fHEW..Dv5.HhkF7uBrfGrvIzNQZRRZJjLN343.RhIOfXRRCGLDcE4AHlvrIC.lTf6BjILgDcQiWBPNvyigI5hF3HgIHHa3OPVbgvohIQLIUQAnIddPHJY5TAnLJg5xZZSk0s4pn6nZ0oBSUCrljhDADB.iPBS0CfdpXCRtnIxJDIoE.A0GGSo2KdId6c2tVVnCTBlMTWX5PAHKNNfl34JJS0UmEPAcIoHKTqo.zNdHf2mmOjjvS9ANfDxkHUbNvjGIIbYRilpFbMMhUDFzTQcEgoiTEErfoxB.QY1T4AhhCDQT3AZxyTGLQZPCEEjXxyjIVH4JJCDFmUzDlKfbj.cQENVSWSYhrhtvGpH4iKiUDIKXSlnOfvPBJmAd5vkJLg.hCBJQfv3gSDSdLHJSdjl3vIZSIL3QCUDIWrXMogJ5RS0EHMl7PxUzEJwp55RzCnL4YRppBSl7XwfnXxilJJNVSZ3gjKWTatLBTESd7PBQL4oCVUe3ZpBATg2+xXWQu1u9t8em.IaciuyG6LabyepHuY7La6xG1Wa86byLuryJq9lKdNl2cuFKxJd6w1h5Zr5Fl6qGt9xHeau1xqcCHYjO1322d40tL5c2W4ceVCUlJ7x8o6Wgm22Mxcp746u1d5pulYlNeOps5Zhmsu6Nq7s3inoJ29m+pmmnlpq9sQeY5ro8oUVM8VUUUM8dyjYM48BkEIWB.EDoLgOnItq4l2aqr5hul7mHSAl981Ywe7pId1OkJvxFLFJCW.P6PPHn9Xyz0GMzDuiV2MqLENa9VY2kU9yJxbwIT7wPHIxPggQzPQxUUUlOfxvBTRJpREMZd0DqTw6UY8XEDPhDva27bO8tl+My+zf608Nyd8sU2aa22Q02P6zU6e2am80UOcUMu8qY2y7bN6yy+WzbzrOM6Q10q+uMysl6zZuYSu+N7tz134tamUy09zjuB3bZlssenhtpaaFn4sYV67by+16t4dasy70nyF8F6qIOpf2lo6F2s+JeOAX1dqWUsLQzty5ys1XaM0RCsy5qOzr+eJd2e26WameFYeeW+2P0yOc742ad07Y9t+90ruh0oxL8gp7BkK9MpW96aGh59m2ugLtnhIh3gF9FZnhbeOhKysqapnZGllcW7+8MuZhm8edabn6mcV3WFW.OXhzLB0GWTX..BoJDkHlvYtHRQAvgwMooy0jGRQSVaJ4hhilIOfpvbMTQVPvLGhBTo3TcAHKTuQMgp.QQDpHKLGYC3vZ5BSTGO1vfN3rYZ5CezQGRQRIfppCNQbrxzwkU0lMc9HAWnvrYyB5nDqHqPnlPGPbPhIOblvP8fJJoNKvxjEkDUFnKTUa7aILTjHwQATTlLQPXam+9TGYd0GNM3BJWvpRSj0HPX77HMABpG.QwjlJ.bR.CzV7bE4XZjnqOfrPC0En2e9TQTlMLuVlby2kwJJBOmEaBHJtItGJVFQC0UmJKHBHUkAjKTXBoSFVLYxCGqIQDoCCJIByFNTdXYx5hrCQSafnngnfSSVhvthL9Xm3hKhJdXhFh3eG5mgTfKpXhHdngTzWDSTI3Px0Vg8ZfO952edt8cpIt7op4OqW9s6IecvfPip7Al1glQfD.P.BJH7H..HJNNHjonzJBgDBDC.D.IBCEDB....C..A.LD.....P.....BC.CDirJOvWaAPxmC4.dOP7ZauvCArDlD35MvYErbTKtNaonTFWTkmqEk6pZMMiXwZG2lt5lfpoMDcSFNmYiPDzVoDhS2MJL7Hnnepf4OUDD7Wm727TyR.0C8DL.CWGPlxkjA2FNHFXr30mcyfbDESlIgU22lo6vhWI4tNKQV0W8asxT+VyDiaOJ.FJofmSjm+2s2KEjBizJ0vQqKkv4kOlXWZyGD+8OUuVsijlmMlTs4QcN8M5mlm6c+vG1vEELkdIqcp2Wlnfc1uKXDgESLTs9R0z6+HFAqeEKpAfQsBkhCsqrPlb3ZlbxhJqDEOtuleSMKE2P8FEfIGOf9UJJiveujmVBNeoIzOGwPDRJ++cDvrMBeMGQBjmwAga8OrDO7A9IOkZiuKEiHzkOG.R2Lix9S+fT1Dk.Au6mH4bb2zFrhvdceTJN2lkx23ZnQtWbPmRmxu3vXLhfORcoW53vY2re1T+dEYfoeL3Ur.eVSp332kxcjt4sho0hyRhNOjdMNHzS8azlNLb53TP+7WHWFJwV6YkUAfToQPnNZREHJXk.tB5Oei.vgXXlYJK.5cjpaLeFt7tF.Uihky96JgBjEt.H9t4xbFuBnJxs.xWqQB.rVnsJRGbqKHLAo6oNQhhFaxT3.IoTQsLCDSYI0hgvJqCNcT3eIiFAWQsGUMH8w66TwXfD3ClV0.oAItjqDAozcPZ8hRt5Y9HSMaQ8BmQxrGAFpxK9pmHBe+CelZCaFSVU8p14c+hjIJ7Co6s1ICZJMf.B3lfh8XujM5q4Nw79apintzVQTXCHYVnRtHHpMtRhCpXmJzPLRR2Tj.zTi9fFEin8AQwvgFDOjao1f+uap2in22zEFqEhPIMFbcLIEVUKHFWJujJIOYhZQXA2FfdNRCqYlkWwLIxvTNJzkDJTBLYPnRtHHbIW7rT2MTboNMI7R5qHu7Fx8KhDjRiUii3uWF6fCEyHQKMfPmRwgpb8v6hJXhSLIyhzd6tS.UEqGJ7wMJ4yslXh9r.4rueIHTk9QFopiRt7qIUgjtN9MVfGQhoebM.pSRIjvvjLgZhmggN3iggO3JeUTnPISmsogV.+EamwU2EwhnkrEbnHMScTCppHtQPVbJ0GuCfVAYyAHZ55e5Pj5wCNGUOcp5PcT.tDuuHU7r2AMigO4.wQCyGvcNFiA0yPU8+PVzFFLM3KLeIcHJTwpgcDAAyJpKzKPjP1ybn6yHHxqJAaXdOXHbHTk9eS0+hL4zgOnfntAUkpRPlOGUCUEOnfpW2eCApFqLwgjLZBqUPckaxpBT0jHDQLZmWCcvJDxnLqS3Ns4Xri1nb7QYmqfXUSAenaDxnnU8v.qXt1TIxPKpbU1apDQy3sJokZ+vZTIE0dyJQ8I9vItnZpBaW48cZLjin6SRrQH1By6Pxjf.l5gF8YJtBr8QEYQFIotRa0Hjgk.NnPWk5tghWpRSRWITKk1IaXR9fMD5n.0Wh1HvkUAO7R0ogfdbFPCwWl0cx9mgVGMC0J1dFFUmBCagxghX8g8mOgIMyq1tzU+ICf0bgB1pRqqL0vNI0tfnnaAh0KF4Itw8FoapRpM8OTMbGbBofK3pHP3RRDFljIChZFm+.NyQpmHrIzaItCnT9JfaPhB4RNdTjlfMo5nvnhoWzxHxYzQMDLIwMFoR75FnIYgnfWMj3QBbLBSmBEZFEpW1x53Z7RbKFwHjGuLEwNtV1riOP+rSn4zWuxyU5xfDOgcbiyUcMgj1WnUFNtSo1oPk23orYF7WLKvKR7S.7Ksg7diSikAVQJKRv.IoyddWJSGIMbbPZGEdQbIvOBSchQdHhiiFkHaswVXkmtcRASnMTTx7E6HAUDn8bvLKkr5O+jL44M.MQ1.doUJCootcB.0IpMJ5ZW1LMk.zmxD6oEVJo33RUVSqSHwc1iDuRWPUhLqKNXCrLZ3urHfAOigNwzo4USIIXR9A89SekMb2CUmEAsPvhlz6LCGt7IgXNhabd3.AsXi9gXMFVEDFN.BTC3HveWOS72RbimSqRN3JsfY4xbcoSDfYoGiCt1.SldJrjBoYqX+mKIZY35jjoANRtTUBpNCVZI9Xa8FE35fkLoT0kOhfBh4QZ1.x4kqiwlXRLN0DFwvFGFMJNIZiU7mi4zFbw5bH91htwLMv+ceWCGaqeUZMbFfm0fIUKtCOPad6UjraxPxE7LuAAnYk0sjfiTO6oB0DNyEo.Z+AhBzrghFYR.DManMh3M5CZrRU5ayjfRK7nksoFMFYzxclgVph2HZ9f5hb8BKCltqoFPUsIaFMSxdJtRCHy36nGB14pJx.6P7xSLBs3xklI08hVGlBLA0tHd9RhRuBe5rKIRlIV1OC+GXvuT3QykgQ3W+2lJyKwhNk+cP94bH09udWd6Nly4ZHxthiF+IdHvHqFocPaVKKPzkfovX.cQdV2GH2f3Fle.971bOExK8jvL7Vb4drTnea8DXdMbQGfcsfg8hVxQXznsATCeJf+VwBU.jHwTPaevDWKMyhfl667ZZMz.WXCZG6I4+PsazfW+CDsARYBNvGm2lToSh38AwDXjWTMx1izlWvFb+EimLIcLXu8n41Zn9ZxpT9EyjxRrpj3o3WwHqNFagUg26dbJRqEaR+tf3d38TtaLKdVh7dxs+qUMs.Y0yQn0z+btgV74MF3.4ilWfil.FzBheGZM4.6E5bZP4Qo8F0qhbF3yIr7Uf2PgfHzv1toLq5vajMA7VUxjOXrTxXlM.7cevIy.hP7D+rXl+DMgXDM4y8vNEKOaypSQcOp6kTJbJViXXCe5hmXCIIiIygvNHG0ReTVIYuA3+8.";
	}
};
}

