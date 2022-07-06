namespace project
{

struct balancefx2_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "balancefx2";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "1709.nT6K8C150zQM.X2bdZB3xhFeUQVMqqUVwGxhAJYxzr0uK.6VyX5dhhfwX79+++RarOcIYDI.TB.k.7dNbUCux6wdpWafqdzXN7AfO6DWeNqc.teNzpXj02cEyY0aj.y7ZW5n9YNEIRruEq07v5Ob2gu2VD3Sto86GqpU4.hFTmWzk.e1eaql00vaFRi1myUN9kW9VAckQ6y25NqubCfOP6JmNM89ppYB78VcEP3KSzq.eY8cS603MC84uxUb0iiA9dXhHvWGZZP1eEgVyUXx929KbLu4ii7EzVqw5HiTVzJKqnnLF4VnXEijzJJEUjZNmzLRNBvGHeGcdxIoLZQkQYBwnEJPqkA26vY2MlaiGvDIQ3Tlx2JGdkLXsl.6JldywfWQFxsS1u6LIcJgpadNLe23vGDJUwLPfHIHY0X9k268jK3SfuPuMOAD91z9Oe3Znqhy1tOT20GB83LLsCu.ZUJrXeb8ZKysgTVybJ1SMCAMRxhNmhhUUrXpRJMEinjUTRJ5TD0LFIUImrpxXYMshSKIBRUTUzn4bRhFsrlS.n312ZeOXPnIyV2U94730z3W97wl6TJkNQBEJ2W5LBnq8EjNuWmMWX0abJu2zkfwUgSPjBlZus9IjC.99wsLq9jt+t09LsFGJp4T0rZR03zXsCY1bsuXWrMRkQ++wJiR6TNMkQwoBO1c2E.shZM21uMRopBcwj9rt81qQqnhl1bWRTUSTIYjzTVMirlnD3s2dqkmjDFNG.kCXy+1TJ81JcFoiqpG6+Zf+G2+50hWLxpIOrQn6G+BFu2icwv94L7Atxcaanyv9siIxbNmTlVpPQJ6p325UbGqC9yUPN3BfgDQLwEXnABJBD3unFetQlQDH...PCPjL.fRwbToy7fjfxfBh.wPBgvgxPHB.H.Q.fI..LBHf.ALHQFZaavJa2g057NlFqwpEazB0uvgppEGOsMjFaNBn+Ip6QknClU25XRA25kMkWyLrQtk2FyrhMD61l4uhsJl9phFDEP7hEpDX1qhq1+q1JRkIHdVDbwwB.4FJ2ve.1X6wY7mv5U.0otXpdr8J7E1yWQyhIHyU8JVKndAqBz7J+bUV2.UgYKp3lNWnWSPhXx15QU8R5GDHnHZIFdjLheu16.R48.jKVTE1K48w1r4vbhrRiqd.TtiOLlEbUGzTpCaNrzMjbEEaF.naLPFSAEGYOO5S5KibzS9GpESDJZIXFT1xzV.JdttBzxjXJnD1VVbV8Nwx4OuahBFRKFHYKh9OGjB46VHu.1Czt+QyD4QSkJT.O67Hn6ObLa3fbIlJbyHan2gtx347vifG+mfind5BGBmGZVaElR3rtLRBPHvOiFhTrmDvUluZEVDnKSYdzXzrsbWFQJwlQTTalcA2cjoNafnFGAGlDRGK69B1CYNYSiOQFK0ijDXcVLZTTfwbdTqrDcpeRo46zhiwuBB+7cTYPguR0KIAZXwnsCnczO9VErrYiSFfE8bF5dnBpvwVaZ7FwMw97XhjzOvOol.YyK5UHQ7PG5YCe09By2Kz3iIOGHhxUSjh3ESHnzCuICGD.QoRWmY5AjA7puxGvjX7KHtnOG.40pS7IpBbNl+ReX4kLP.zsDXmEEHjfzWZSk9gghy7j.GAVTpJQpfe3NHgdFBoOHLkfHisHBfHUB8fTECYGdiMe0J3dh6VqL4EEEVS1KlBGRyXZ0aAgqqwQQ4diYzJtw25sQ7jXlwogIWjt7UYaLGCTSWKekmly.QUdW.1KAg8LFcOAhZwm5vxSHbg7nWQTbRAKlhOIaEyKoSINcqYGGkFZJJXm2g4Wvjfz3Ya+y5qPQhLM+RqS8U9WFiZRQOicdVLm8CWVzg0e9bUIelD2Ux3X2urJsGwz4PtkDNk0MXVi8gvtta+Dv+ta0NkGM7ilpbIAYoz5TQi6vWdxAazgZJnKsxGl4kW7BgStroCDkTu8piCnqrVdUbP1o7dXfWfpZeTKaovdeYlpBzypFf8HCDvAOvH1MXT.atKKeh+aKnLcZzPOMnFp0mChoupE+KHoCNiVuaGB0oX9cicKFkMCubyON2TffLaDxPhmJtMi6yY6.WmnOtOfBES9PpcBN1Bg1dXQ2kjldavM1VH3YKOkkbUe+C+..BoBFQgZZh7HPiUUnDJBvyTgnphRCMgntIw71n1NxewajYyu4GOziXXeI2LHOnALkJVCaB0L2YHZWiQlfWBqKS6vNwKtNlX9Of9YjSESieUqc5FMSY7kYIvs0fD6LvfDClsCKXyfyNVR3RqSiAUil9WG.";
	}
};
}

