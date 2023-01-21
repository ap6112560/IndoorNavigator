using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AI;

public class SetNavigationTarget : MonoBehaviour
{
    [SerializeField]
    private List<Target> navigationTargetObjects = new List<Target>();

    private NavMeshPath path; // current calculated path
    private LineRenderer line; // linerenderer to display path
    private Vector3 targetPosition = new Vector3(-5.2f, 0, 1.25f); // current target position

    private bool lineToggle = false;
    private int i = 1;
    private void Start()
    {
        path = new NavMeshPath();
        line = transform.GetComponent<LineRenderer>();
        line.enabled = lineToggle;
        targetPosition = navigationTargetObjects[i].PositionObject.transform.position;
    }

    private void Update()
    {
        float dist = Vector3.Distance(navigationTargetObjects[i].PositionObject.transform.position, transform.position);

        if (dist < 1.0)
        {
            if (i < navigationTargetObjects.Count - 1)
            { //negate targets[0], since it's already set in destination.
                i++; //change next target
                targetPosition = navigationTargetObjects[i].PositionObject.transform.position; //go to next target by setting it as the new destination
            }
        }

        if (lineToggle && targetPosition != new Vector3(-5.2f, 0, 1.25f))
        {
            NavMesh.CalculatePath(transform.position, targetPosition, NavMesh.AllAreas, path);
            line.positionCount = path.corners.Length;
            line.SetPositions(path.corners);
        }
    }

    public void ToogleVisibility()
    {
        lineToggle = !lineToggle;
        line.enabled = lineToggle;
    }
}
