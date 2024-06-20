namespace project
{

struct GranularWithMod_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "GranularWithMod";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "1711.nT6K8CV2xzRM.XGMhdBvRFM.uNx.aAskWoJQGELy5Hc1cec.psjDQcVTTTjXHJl3jPMqoefk.jI.XBPsWmPzMqgok3+6VttwixWwrWbcyxzR352O6pFYZbul2rZLQtb2VMFmbsiN+Axy0Zu2juiyZ7GkHK7dboyc3TIB64MPjmCw8P991uX0cUSHMnMuzKh6sWNupMJhOCWAccYeyv0dl9BTupYzV2upUHw8WqNiy8WjdTbelFy22MdqFCnNlicMukU2V7Nv8SbAD26wVGpeyDPA4NUMhbkYzFsamKplgwDPBuDX4RG5s1FJkZq2sFeTGyy.XNm7rqchWEoTdy15W6qhEwHjLbc+QyiR7gRvGbRrxM+4ityouokgeD.s3fUh.5pi0dLWqAF5l4Ef0Bw6MJqg64MLu.lHIxkrdaoh0qX59FDvOvazt8MSv2DQUL+ykgw7b+Ce3Iw8ht1rKbtmuud7rEwnZViimHvaIIgypIEkDULFmWnuDbenqGad3DDJYMgRPEjjpL4cgegwpYirOD5XLb9APTJdwvZ7ICCpq0XadNL7etdsA+BGGBheGNj+27lfsk4UvHbee0za4jJowpp37Mf62a5rVh80V8Hxf8UhLDmSmtGM+ofjoLVYM8p3vUnw1MHl+ewAOXHkvpAm8Zs2NXT.w8T73ppYes37FYD9A7fhpzAnzIy3jZppRJozGdKDvTBkx3zEHkpBFmQYTNQiTSQqYbVES3gbkMhGgPKRKTUSSJUZIkTYLuE.7u17IKIJ0bREmfxJSJF.uDVQQiSHLNkjjMbs3MOAh+qw8ZFOJQIoEThVIkRUSVwn7xq27MiG.8NDSoJII0j0jNQMIImz3ixjpHEUjRUYEevl0f.wuaPZDDHwnFaQZFA..P..DPP.Qy..JDD5nL5ABhEDPE.GBKBFEDBBfD..DAL..A.BL.f.fQw.yQjMtCpCiSN9n21H6l8SY.HI2tShli.wMZh.Ylx3Ji6kovT1h0oSaGfPAwvEdYNSLZpaFfTCUJIrRQnJJ5g7ieDRwaT.mA0YNEciFFR2A3dbm7SvOzC7icQSBAV4J0LYXmJ93ojotIhzdd.z45x6.3aWVzJ5P4V42YHWftByQ.ezFGV2eL06UhwFSW3YHMBvm+TCp09Kps1vdQRx4DAEIGawiJhAYkhBtPGrE5gCbIdAXWLA+XfFz.uJiJQM1lTflB5s.DmFj9.MHXo+2hsTwlFzgW.19Y5+zWnFvdLnZ0FhsBE0ESItyBbYK4dmmRDAXAVieBsLI5Cftx5EpRAhpLoLRDjyt9QEO7rJ5zwFwZC8Fv4BpJPtn0cZszh3igNDnOckAD.ElRDP92XFPNsf6yJ.0+OI4lhtd...exCTIAVZRbQ1hsumfQz5VpN7CL3vjLHsp5XGnIqkDTV022.ozpe1w1RuK38OZKvE1bfSDaTSu6H0P05dBbxCpWIlMzyD.2Omg9uyKM2L.ImY14CEzQUTlOcfxc8SJeK.PaKEmqcS5Y35vw0qMnbpkYCowroyRMFgu.BCOXIEDWk3gDCe1eOASxFptqsci4.47nBbWOHxjzA45TlXgvLFjF1vAEzbereDhMtVzpsVi1rN1tLScqtzIqnkMAamSLY2bsqjEKBLYS4AWnYWjBbRV8oVnU+XNy0EeZjdUb+.DFmg.nobJx2EwCEdz.T+pRGEMc3thXZ616FwLh0WG+ez3iqgqLWcOQTjVKhMjf2AbDQLw.fjP1CIPcwJaHX9hqYAc.UXOB9F9YyAChxGasy31IxBSBUFJBme5CzHONsa82GdbwHn0ehLWK0GUxGLETlkSXlAJR.pCZO5OJ5nwBfblwrob3hj6XSXFCjibHhabpwJXty7ZwQyYI+4TnhRyLnVzI.2jHsXflgo2RF6fQQtA9KrTpvgru423lqh1R5IlzlNn++2i3ySYaI4INPadhV+ck+sY3on0jdhIsoAHQQMuIqq5eYCUyQT84KizzFM.k+3TnxNGwWFAyodmzgbycGSsJxqq4g5gj.d7a0ZVnciDsk2TM5Dcf96NknbOkiK1taBX1yb8SdccjU8uEt0DjJbLcTKcAbtTVuImzCa5+jJjlrb2MCYaUP7sE4ZnVBWxkjgubC2icMiev.+bY9O0jjJbRQiXBXPOV8dQ98LteDSMhv6aCcaJHFCCgMOoR0nP4DboxVOT0ENjq6dWcvMfIqjge4NxpGr2BfM9+fTjFhPvzz8yd4LAArEBGONHJAeBMomDLbhMmC0NrzOrl2Kr.xwjn3JrYRHamyc0Ml+xA";
	}
};
}

